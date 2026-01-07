#include <iostream>
#include <string>
#include <cmath>

int main()
{
    std::string imie;
    int ax, ay, bx, by, cx, cy;

    std::cout << "Witaj, podaj imię: ";
    std::cin >> imie;

    std::cout << std::endl
              << "Miło Cię widzieć " + imie + "!" << std::endl;

    std::cout << "Podaj pierwszą parę współrzędnnych: ";
    std::cin >> ax >> ay;

    std::cout << "Podaj drugą parę współrzędnnych: ";
    std::cin >> bx >> by;

    std::cout << "Podaj trzecią parę współrzędnnych: ";
    std::cin >> cx >> cy;

    // Pitagoras
    double a = std::sqrt(std::pow(cx - bx, 2) + std::pow(cy - by, 2));
    double b = std::sqrt(std::pow(cx - ax, 2) + std::pow(cy - ay, 2));
    double c = std::sqrt(std::pow(bx - ax, 2) + std::pow(by - ay, 2));

    if (a + b > c && a + c > b && b + c > a)
    {
        double obwod = a + b + c;
        // Heron
        double p = (a + b + c) / 2.0;
        double pole = std::sqrt(p * (p - a) * (p - b) * (p - c));

        double sx = (ax + bx + cx) / 3.0;
        double sy = (ay + by + cy) / 3.0;

        double R = (a * b * c) / (4.0 * pole);

        std::cout << "Obwód: " << obwod << std::endl;
        std::cout << "Pole: " << pole << std::endl;
        std::cout << "Środek ciężkości: S = (" << sx << ", " << sy << ")" << std::endl;
        std::cout << "Promień okręgu opisanego: " << R << std::endl;
    }
    else
    {
        std::cout << std::endl
                  << "Z podanych punktow nie można zbudować trójkąta." << std::endl;
    }

    return 0;
};