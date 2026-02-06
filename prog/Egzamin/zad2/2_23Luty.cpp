#include <iostream>
#include <string>
#include <fstream>

const int n{5};

int main()
{
    std::string A[n][n], napis;
    std::ofstream inc;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // note
            std::cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int najktorszyIndex{0};

        for (int j = 0; j < n; j++)
        {

            if (A[i][j].length() < A[i][najktorszyIndex].length())
            {
                najktorszyIndex = j;
            }
        }

        A[i][i] = A[i][najktorszyIndex];
    }

    inc.open("inc.txt", std::ios::out);

    // nowa << A[i][j];

    for (int i = 0; i < n; i++)
    {
        if (A[i][n - 1][0] == '#')
        {
            for (int j = 0; j < n; j++)
            {
                inc << A[i][j];
            }
        }
    }
}