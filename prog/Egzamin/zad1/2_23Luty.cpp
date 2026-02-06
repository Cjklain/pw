#include <iostream>

const int D{5}, G{10};

int main()
{
    int liczba, licznikPatzystych{0}, ostatnia, najmniejsza;
    bool pierwsza = true;

    while (true)
    {

        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;

        if (liczba % 2 == 0)
        {
            if (pierwsza)
            {
                najmniejsza = liczba;
                pierwsza = false;
            }

            if (liczba < najmniejsza)
            {
                najmniejsza = liczba;
            }

            ostatnia = liczba;
            licznikPatzystych++;
        }

        if (liczba >= D && liczba <= G)
        {
            break;
        }
    }

    if (licznikPatzystych)
    {
        std::cout << "Parzystych:" << licznikPatzystych << "Ostatnia: " << ostatnia << "Najmniejsza:" << najmniejsza;
    }
    else
    {
        std::cout << "Brak parzystych";
    }
}