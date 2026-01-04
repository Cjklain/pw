#include <iostream>

int main()
{
    int x, y;

    std::cout << "Podaj liczby: " << std::endl;
    std::cin >> x >> y;

    if (y > x)
    {
        x = y;
    }

    std::cout << "Wieksza liczba: " << x << std::endl;
    return 0;
};