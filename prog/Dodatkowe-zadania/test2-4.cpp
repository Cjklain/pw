#include <iostream>
#include <string>

const int w = 3;
const int k = 4;

double analizujNapisy(std::string tab[w][k], int nrWiersza, char szukanyZnak)
{

    int sumaDlugosci = 0;
    int iloscZnalezionych = 0;

    for (int j = 0; j < k; j++)
    {

        std::string aktualnyNapis = tab[nrWiersza][j];
        if (aktualnyNapis.length() > 0 && aktualnyNapis[0] == szukanyZnak)
        {

            std::cout << aktualnyNapis << " ";

            sumaDlugosci += aktualnyNapis.length();
            iloscZnalezionych++;
        }
    }

    std::cout << std::endl;

    if (iloscZnalezionych > 0)
    {
        return (double)sumaDlugosci / iloscZnalezionych;
    }
    else
    {
        return 0.0;
    }
}

int main()
{
    std::string X[w][k] = {
        {"bbbbb", "bbb", "bbbbb", "Bbbbb"},
        {"Bbbbbb", "Aaaa", "Bbbb", "Aaaa"}
    }

                          std::cout
                          << "Analiza wiersza 1 dla litery 'A':" << std::endl;

    double srednia = analizujNapisy(X, 1, 'A');

    std::cout << "Srednia dlugosc: " << srednia << std::endl;

    return 0;
}