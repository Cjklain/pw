#include <iostream>

int main()
{
    int x, y;

    std::cout << "Podaj liczby: " << std::endl;
    std::cin >> x >> y;

    if (x > y)
    {
        x = y;
    }
    else if (x == y)
    {
        std::cout << "Liczby sa rowne" << std::endl;
        return 0;
    }

    if (x > 0)
    {
        std::cout << "Liczba: " << x << " jest dodatania" << std::endl;
    }
    else if (x < 0)
    {
        std::cout << "Liczba: " << x << " jest ujemna" << std::endl;
    }
    else
    {
        std::cout << "Liczba: " << x << " jest zerem" << std::endl;
    }
    // x

    return 0;
};