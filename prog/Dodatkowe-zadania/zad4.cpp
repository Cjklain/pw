#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

const int w{4}, k{5}, Sz{6};

int main()
{
    long double dziennik[w][k], suma[k] = {}, srednia[k], temp;
    int maxIndex;
    srand(time(0));

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            dziennik[i][j] = (5.0) * rand() / double(RAND_MAX);
        }
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            suma[j] += dziennik[i][j];
            std::cout << std::fixed << std::setprecision(1) << std::setw(Sz) << dziennik[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    for (int i = 0; i < k; i++)
    {
        srednia[i] = suma[i] / w;
        if (i == 0)
        {
            maxIndex = i;
        }
        if (srednia[i] > srednia[maxIndex])
        {
            maxIndex = i;
        }

        std::cout << std::fixed << std::setprecision(2) << std::setw(Sz) << srednia[i];
    }

    std::cout << std::endl
              << std::endl;

    if (maxIndex != k - 1)
    {
        for (int i = 0; i < w; i++)
        {

            temp = dziennik[i][maxIndex];
            dziennik[i][maxIndex] = dziennik[i][k - 1];
            dziennik[i][k - 1] = temp;
        }
    }

    std::cout << std::endl;
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            std::cout << std::fixed << std::setprecision(1) << std::setw(Sz) << dziennik[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}