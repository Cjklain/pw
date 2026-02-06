#include <iostream>

const int M{10};

int main()
{
    int liczba, licznik{0}, ostatnia, najmniejsza;
    bool pierwszaIteracja = true;

    while (true)
    {
        std::cin >> liczba;

        if (!pierwszaIteracja)
        {
            if (liczba % 2 == 0 && ostatnia % 2 == 0)
            {
                licznik++;
            }
        }

        if (pierwszaIteracja)
        {
            najmniejsza = liczba;
            pierwszaIteracja = false;
        }

        if (liczba < najmniejsza)
        {
            najmniejsza = liczba;
        }

        ostatnia = liczba;

        if (liczba % M == 0 && M > 0)
        {
            break;
        }
    }

    std::cout << "najmniejsza" << najmniejsza;
    std::cout << "parzyste" << licznik;
}