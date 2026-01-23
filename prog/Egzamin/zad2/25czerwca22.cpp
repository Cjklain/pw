#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

const int n{5};

int main()
{
    std::string A[n][n], temp;
    int dlugosc, indexNajdluzszyJ, indexNajdluzszyI;
    std::ofstream nowa;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            indexNajdluzszyJ = n - 1 - i;
            indexNajdluzszyI = i;
            dlugosc = A[i][n - 1 - i].length();
        }

        if (A[i][n - 1 - i].length() > dlugosc)
        {
            indexNajdluzszyJ = n - 1 - i;
            indexNajdluzszyI = i;
            dlugosc = A[i][n - 1 - i].length();
        }
    }

    if (A[n - 1][n - 1].length() != dlugosc)
    {
        temp = A[n - 1][n - 1];
        A[n - 1][n - 1] = A[indexNajdluzszyI][indexNajdluzszyJ];
        A[indexNajdluzszyI][indexNajdluzszyJ] = temp;
    }

    nowa.open("nowa.txt", std::ios::out);

    for (int i = 0; i < n; i = i + 2)
    {
        for (int j = 0; j < n; j++)
        {
            nowa << A[i][j];
        }
    }
}