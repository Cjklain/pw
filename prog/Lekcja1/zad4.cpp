#include <iostream>

int main()
{
    int x, y, z, max, mid;

    std::cout << "Podaj liczby: " << std::endl;
    std::cin >> x >> y >> z;

    if (x >= y)
    {
        max = x;
        mid = y;
    }
    else if (y >= x)
    {
        max = y;
        mid = x;
    }

    if (z > max)
    {
        mid = max;
        max = z;
    }

    if (z > mid)
    {
        mid = z;
    }

    std::cout << "Najwieksze liczby to: " << max << " " << mid << std::endl;
    std::cout << "Wynik dzielenia to: " << max / (1.0 * mid) << std::endl;

    return 0;
};