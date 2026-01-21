#include <iostream>

const int w = 2;
const int k = 3;

void analizujOstatniWiersz(char tab[w][k], int &ile)
{
    ile = 0;

    for (int j = 0; j < k; j++)
    {
        char znak = tab[w - 1][j];

        if (znak >= 'A' && znak <= 'Z')
        {
            std::cout << znak << " ";
            ile++;
        }
    }
    std::cout << std::endl;
}

int main()
{
    char A[w][k] = {
        {'a', 'A', 'A'},
        {'A', 'a', 'A'}};

    int iloscDuzych = 0;

    std::cout << "Duze litery w ostatnim wierszu: ";

    analizujOstatniWiersz(A, iloscDuzych);

    std::cout << "Znaleziono ich: " << iloscDuzych << std::endl;

    return 0;
}