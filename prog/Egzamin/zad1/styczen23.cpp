#include <iostream>

const int A{10}, B{10};

int main()
{
    int x, y, licznika{0}, poprzedniaSuma{0}, aktualnaSuma, licznik2{0};
    double srednia{0};
    bool pierwsza = true;

    while (true)
    {
        std::cout << "Podaj pare liczb: ";
        std::cin >> x >> y;

        if (y < 0)
        {
            srednia += y;
            licznika++;
        }

        aktualnaSuma = x + y;

        if (!pierwsza)
        {
            if (poprzedniaSuma == aktualnaSuma)
            {
                licznik2++;
            }
        }

        if (x == A && y == B)
        {
            break;
        }

        if (pierwsza)
        {
            pierwsza = false;
        }
        poprzedniaSuma = aktualnaSuma;
    }

    if (licznika > 0)
    {
        std::cout << "Średnia " << srednia / licznika;
    }

    if (licznik2 > 0)
    {
        std::cout << "te same " << licznik2;
    }
}