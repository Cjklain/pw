#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

const int w{4}, k{8};

int main()
{
    std::ifstream plik;
    std::string A[w][k], temp;
    srand(time(0));

    int indexNaj, dlugosc, jz;

    plik.open("new.txt", std::ios::in);

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            plik >> A[i][j];
        }
    }

    for (int i = 0; i < w; i++)
    {

        for (int j = 0; j < k; j++)
        {
            if (j == 0)
            {
                dlugosc = A[i][j].length();
                indexNaj = j;
            }

            if (A[i][j].length() < dlugosc)
            {
                dlugosc = A[i][j].length();
                indexNaj = j;
            }
        }

        jz = (rand() % k);
        temp = A[i][jz];
        A[i][jz] = A[i][indexNaj];
        A[i][indexNaj] = temp;
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            std::cout << A[i][j];
        }

        std::cout << std::endl;
    }
}
