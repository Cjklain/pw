#include <iostream>

const int A{5}, B{7};

int main()
{

    int x, y, suma{0}, ostatniX, ostatniY, licznik{0}, licznikUjemnych{0};
    bool pierwszaIteracja = true;

    while (true)
    {

        std::cin >> x >> y;

        if (y < 0)
        {
            suma += y;
            licznikUjemnych++;
        }

        if (!pierwszaIteracja)
        {
            if (ostatniX + ostatniY == x + y)
            {
                licznik++;
            }
        }

        if (pierwszaIteracja)
        {
            pierwszaIteracja = false;
        }

        ostatniX = x;
        ostatniY = y;

        if (x == A && y == B)
        {
            break;
        }
    }

    if (licznikUjemnych > 0)
    {
        std::cout << "Srednia " << (suma * 1.0) / licznikUjemnych;
    }

    std::cout << "Te same liczby wystapily " << licznik;
}