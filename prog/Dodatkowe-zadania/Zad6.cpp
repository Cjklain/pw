#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

const int w{10}, k{3}, G{100}, sz{5};

int main()
{
    struct Student
    {
        char inicjalImie;
        char inicjalNaziwsko;
        double punkty;
    };

    srand(time(0));
    std::cout << std::fixed << std::setprecision(2);
    Student A[w][k];

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            A[i][j].inicjalImie = 65 + (26.0) * rand() / (double(RAND_MAX) + 1);
            A[i][j].inicjalNaziwsko = 65 + (26.0) * rand() / (double(RAND_MAX) + 1);
            A[i][j].punkty = (double(G)) * rand() / double(RAND_MAX);
            std::cout << A[i][j].inicjalImie << A[i][j].inicjalNaziwsko << " " << A[i][j].punkty << " ";
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
    std::cout << std::endl;

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            std::cout << A[i][j].inicjalImie << A[i][j].inicjalNaziwsko << " " << A[i][j].punkty << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}