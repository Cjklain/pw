#include <iostream>

const int n{5};

int main()
{
    std::string A[n][n];
    int licznikZmian{0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> A[i][j];
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        int licznik{0};

        for (int j = 0; j < n; j++)
        {
            if (A[i][j][0] == 'S')
            {
                licznik++;
            }
        }

        if (licznik >= (n / 2.0))
        {
            licznikZmian++;
            if (A[i][i - 1].length() > A[i][i + 1].length())
            {
                A[i][i] = A[i][i - 1];
            }
            else
            {
                A[i][i] = A[i][i + 1];
            }
        }

        licznik = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << A[i][j];
        }

        std::cout << "\n";
    }

    std::cout << licznikZmian;
}