#include <iostream>

int main()
{
    int x, y, z, max;

    std::cout << "Podaj liczby: " << std::endl;
    std::cin >> x >> y >> z;

    max = x;

    if (y > max)
    {
        max = y;
    }

    if (z > max)
    {
        max = z;
    }

    std::cout << "Najwieksza liczba to: " << max << std::endl;

    return 0;
};