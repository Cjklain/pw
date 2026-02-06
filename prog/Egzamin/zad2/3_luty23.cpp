#include <iostream>
#include <fstream>

const int n{5};

int main()
{
    std::string A[n][n];
    std::ofstream klmary;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int jIndex = 0;

        for (int j = 0; j < n; j++)
        {
            if (A[i][j].length() < A[i][jIndex].length())
            {
                jIndex = j;
            }
        }

        A[i][n - i - 1] = A[i][jIndex];
    }

    klmary.open("klamry.txt", std::ios::out);

    for (int i = 0; i < n; i++)
    {
        if (A[i][0][0] == '}')
        {
            for (int j = 0; j < n; j++)
            {
                klmary << A[i][j];
            }
        }
    }
}