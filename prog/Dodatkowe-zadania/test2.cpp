#include <iostream>

const int w = 3;
const int k = 4;

const char Z = 'a';

int main()
{
    char a[w][k];

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            std::cin >> a[i][j];
        }
    }

    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int j = 0; j < k; j++)
    {
        int licznik = 0;

        for (int i = 0; i < w; i++)
        {
            if (a[i][j] == Z)
            {
                licznik++;
            }
        }
        std::cout << "Kolumna " << j << ": " << licznik << " raz(y)" << std::endl;
    }

    return 0;
}