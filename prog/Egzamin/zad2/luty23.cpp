#include <iostream>
#include <fstream>

const int n{5};

int main()
{
    std::string A[n][n];
    std::ofstream klamry;
    int dlugosc, indexNajkrotszego;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "Podaj napis:";
            std::cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        dlugosc = INT64_MAX;
        indexNajkrotszego = 0;

        for (int j = 0; j < n; j++)
        {
            if (A[i][j].length() < dlugosc)
            {
                dlugosc = A[i][j].length();
                indexNajkrotszego = j;
            }
        }

        A[i][n - 1 - i] = A[i][indexNajkrotszego];
    }

    klamry.open("klamry.txt", std::ios::out);

    for (int i = 0; i < n; i++)
    {
        if (A[i][0][0] == '}')
        {
            for (int j = 0; j < n; j++)
            {
                klamry << A[i][j];
            }
        }
    }
}