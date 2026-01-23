#include <iostream>

int main()
{
    int pierwsza, przedOstatnia, ostatnia, licznikUjemnych{0}, najwieksza;
    double srednia{0.0};
    bool pierwszaIteracja = true;
    std::cout << "Podaj liczbę: ";
    std::cin >> pierwsza;

    najwieksza = pierwsza;

    if (pierwsza >= -99 && pierwsza <= -10)
    {
        licznikUjemnych++;
        srednia += pierwsza;
    }

    while (true)
    {
        std::cout << "Podaj liczbę: ";
        std::cin >> ostatnia;

        if (ostatnia >= -99 && ostatnia <= -10)
        {
            licznikUjemnych++;
            srednia += ostatnia;
        }

        if (ostatnia > najwieksza)
        {
            najwieksza = ostatnia;
        }

        if (!pierwszaIteracja && (przedOstatnia % pierwsza != 0 && ostatnia % pierwsza != 0))
        {
            break;
        }

        if (pierwszaIteracja)
        {
            pierwszaIteracja = false;
        }

        przedOstatnia = ostatnia;
    }

    if (licznikUjemnych > 0)
    {
        std::cout << "Średnia: " << srednia / licznikUjemnych << std::endl;
    }

    std::cout << "Najwieksza: " << najwieksza << std::endl;
}