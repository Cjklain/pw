#include <iostream>
#include <cstdlib>
#include <ctime>

const int w{10}, k{6};

void wylosujIWypelnij(char a, char b, char arr[w][k])
{
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            arr[i][j] = (rand() % (b - a + 1)) + a;
        }
    }
}

void wypiszTablice(char arr[w][k])
{
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < k; j++)
        {
            std::cout << arr[i][j] << " ";
        }

        std::cout << std::endl;
    }
}

void zamazWiersz(char znakZamazania, char znakDoSprawdzenia, char arr[w][k])
{
    for (int i = 0; i < w; i++)
    {
        bool wierszDoWymazania = true;
        for (int j = 0; j < k; j++)
        {
            if (arr[i][j] == znakDoSprawdzenia)
            {
                wierszDoWymazania = false;
                break;
            }
        }

        if (wierszDoWymazania)
        {
            for (int j = 0; j < k; j++)
            {
                arr[i][j] = znakZamazania;
            }
        }
    }
}

int main()
{
    char Li[w][k], Cy[w][k];
    srand(time(0));

    wylosujIWypelnij('A', 'Z', Li);
    wylosujIWypelnij('0', '9', Cy);

    wypiszTablice(Li);
    std::cout << std::endl;
    wypiszTablice(Cy);
    std::cout << std::endl;

    zamazWiersz('%', 'P', Li);
    zamazWiersz('&', '5', Cy);

    wypiszTablice(Li);
    std::cout << std::endl;

    wypiszTablice(Cy);
}