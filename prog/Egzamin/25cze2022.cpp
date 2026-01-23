#include <iostream>

const int M{10};

int main()
{

    int liczba, najmniejsza, poprzednia, licznikParzystych{0};

    bool pierwszaIteracja = true;

    while (true)
    {
        std::cout << "Podaj liczbe: ";
        std::cin >> liczba;

        if (!pierwszaIteracja && liczba < najmniejsza)
        {
            najmniejsza = liczba;
        }

        if (!pierwszaIteracja)
        {
            if (poprzednia % 2 == 0 && liczba % 2 == 0)
            {
                licznikParzystych++;
            }
        }

        if (pierwszaIteracja)
        {
            najmniejsza = liczba;
            pierwszaIteracja = false;
        }

        if (liczba % M == 0 && liczba > 0)
        {
            break;
        }

        poprzednia = liczba;
    }

    if (licznikParzystych > 0)
    {
        std::cout << "Parzystych" << licznikParzystych;
    }

    std::cout << "Najmniejsza" << najmniejsza;
}