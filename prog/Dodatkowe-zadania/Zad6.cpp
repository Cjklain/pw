#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

const int w{10}, k{3}, Sz{6};
const double G{100.0};

int main()
{
    struct Student
    {
        char inicjalImie;
        char inicjalNazwisko;
        double punkty;
    };

    std::cout << std::fixed << std::setprecision(2);
    Student A[w][k];

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            A[i][j].inicjalImie = (rand() % 26) + 65;
            A[i][j].inicjalNazwisko = (rand() % 26) + 65;
            A[i][j].punkty = G * rand() / double(RAND_MAX);
            std::cout << A[i][j].inicjalImie << A[i][j].inicjalNazwisko << std::setw(Sz) << A[i][j].punkty << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < w; i++)
    {
        if (A[i][0].inicjalImie == 'A' || A[i][0].inicjalImie == 'B')
        {
            Student temp = A[i][0];

            for (int j = 1; j < k; j++)
            {
                A[i][j - 1] = A[i][j];
            }

            A[i][k - 1] = temp;
        }
    }

    std::cout << std::endl;

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            std::cout << A[i][j].inicjalImie << A[i][j].inicjalNazwisko << std::setw(Sz) << A[i][j].punkty << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}