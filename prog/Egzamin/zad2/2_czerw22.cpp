#include <iostream>
#include <fstream>

const int n{5};

int main()
{
    std::string A[n][n];
    int przekatnaNajInx;
    std::ofstream nowa;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> A[i][j];
        }
    }

    przekatnaNajInx = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i][n - i - 1].length() > A[przekatnaNajInx][n - przekatnaNajInx - 1].length())
        {
            przekatnaNajInx = i;
        }
    }

    if (A[przekatnaNajInx][n - przekatnaNajInx - 1].length() != A[n - 1][n - 1].length())
    {
        std::string temp = A[n - 1][n - 1];
        A[n - 1][n - 1] = A[przekatnaNajInx][n - przekatnaNajInx - 1];
        A[przekatnaNajInx][n - przekatnaNajInx - 1] = temp;
    }

    nowa.open("nowa.txt", std::ios::out);

    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < n; j++)
        {
            nowa << A[i][j];
        }
    }
}