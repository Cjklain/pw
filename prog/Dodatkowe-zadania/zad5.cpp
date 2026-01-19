#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

const int n{10}, X{1}, M{2}, D{6};

int main()
{
    std::ifstream plik;
    std::ofstream coDrugi;
    long double A[n][n], max, min;
    int brakujace{0}, maxIndex{0};
    std::cout << std::fixed << std::setprecision(M);

    std::string nazwaPliku;
    std::cout << "Podaj nazwe pliku: ";
    std::cin >> nazwaPliku;

    plik.open(nazwaPliku, std::ios::in);

    if (!plik.is_open())
    {
        std::cout << "Bład!" << std::endl;
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (plik >> A[i][j])
            {
                plik >> A[i][j];
            }
            else
            {
                A[i][j] = X;
                brakujace++;
            }
        }
    }

    plik.close();

    if (brakujace > 0)
    {
        std::cout << "W pliku brakuje " << brakujace << " wartości" << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << std::setw(D) << A[i][j];
        }
        std::cout << std::endl;
    }

    max = A[0][0];
    for (int i = 1; i < n; i++)
    {
        if (A[i][i] > max)
        {
            max = A[i][i];
            maxIndex = i;
        }
    }

    min = A[0][n - 1];
    for (int i = 0; i < n; i++)
    {
        if (A[i][n - 1 - i] < min)
        {
            min = A[i][n - 1 - i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        A[maxIndex][i] = max;
        A[i][maxIndex] = max;
    }

    A[maxIndex][maxIndex] = min;

    std::cout << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << std::setw(D) << A[i][j];
        }
        std::cout << std::endl;
    }

    coDrugi.open("coDrugi.txt", std::ios::out);
    if (!coDrugi.is_open())
    {
        std::cout << "Bład!" << std::endl;
        return 1;
    }

    coDrugi << std::fixed << std::setprecision(M);

    for (int i = 0; i < n; i = i + 2)
    {
        for (int j = 0; j < n; j++)
        {
            coDrugi << std::setw(D) << A[i][j];
        }

        coDrugi << std::endl;
    }

    coDrugi.close();

    return 0;
}