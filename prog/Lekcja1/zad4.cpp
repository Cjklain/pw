#include <iostream>

int main()
{
    int x, y, z;

    std::cout << "Podaj liczby: " << std::endl;
    std::cin >> x >> y >> z;

    if (z < x && z < y)
    {
        std::cout << "Najwieksze liczby to: " << x << "i " << y << std::endl;
        if (x > y)
        {
            std::cout << "Wynik dzielenia to: " << x / (1.0 * y) << "i " << y << std::endl;
        }
        else
        {
            std::cout << "Wynik dzielenia to: " << y / (1.0 * x) << "i " << y << std::endl;
        }
    }

    if (y < x && y < z)
    {
        std::cout << "Najwieksze liczby to: " << x << "i " << z << std::endl;
        if (x > z)
        {
            std::cout << "Wynik dzielenia to: " << x / (1.0 * z) << std::endl;
        }
        else
        {
            std::cout << "Wynik dzielenia to: " << z / (1.0 * x) << std::endl;
        }
    }

    if (x < y && x < z)
    {
        std::cout << "Najwieksze liczby to: " << y << "i " << z << std::endl;
        if (y > y)
        {
            std::cout << "Wynik dzielenia to: " << y / (1.0 * z) << std::endl;
        }
        else
        {
            std::cout << "Wynik dzielenia to: " << z / (1.0 * y) << std::endl;
        }
    }

    return 0;
};