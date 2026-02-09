#include <iostream>

const int R1{2}, R2{7};

int main()
{
    double liczba, ostatniaUjemna, najwUjemna;
    int licznikUjemnych{0};
    bool pierwszaIteracja = true;

    while (true)
    {

        std::cin >> liczba;

        if (liczba < 0)
        {
            ostatniaUjemna = liczba;
            licznikUjemnych++;

            if (!pierwszaIteracja)
            {
                if (liczba > najwUjemna)
                {
                    najwUjemna = liczba;
                }
            }

            if (pierwszaIteracja)
            {
                najwUjemna = liczba;
                pierwszaIteracja = false;
            }
        }

        if (liczba >= R1 && liczba <= R2)
        {
            break;
        }
    }

    if (licznikUjemnych)
    {
        std::cout << "ilość ujemnych" << licznikUjemnych;
    }
    else
    {
        std::cout << "Brak ujemnych";
    }

    if (ostatniaUjemna)
    {
        std::cout << "ostatnia ujemna" << ostatniaUjemna;
    }

    if (najwUjemna)
    {
        std::cout << "Najwieksza ujemna" << najwUjemna;
    }
}