#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

const int n{5};

int main()
{
    std::string A[n][n];
    double srednia = n / 2.0;
    int licznik, licznikZmian{0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        licznik = 0;

        for (int j = 0; j < n; j++)
        {
            if (A[i][j][0] == 'S')
            {
                licznik++;
            }
        }

        if (licznik >= srednia)
        {
            if (i != 0 && i != n - 1)
            {
                licznikZmian++;
                if (A[i][i - 1].length() > A[i][i + 1].length())
                {
                    A[i][i] = A[i][i - 1];
                }
                else if (A[i][i + 1].length() > A[i][i - 1].length())
                {
                    A[i][i] = A[i][i + 1];
                }
                else
                {
                    A[i][i] = A[i][i + 1];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << A[i][j];
        }
    }

    std::cout << "Liczba zmian:" << licznikZmian;
}