#include <iostream>

const double R1{5}, R2{7};

int main()
{

    double obecna, ostatniaUjemna, najwiekszaUjemna;
    int licznikLiczbUjemnnych{0};
    bool pierwszaUjemna = true;

    do
    {
        std::cout << "Podaj liczbe: ";
        std::cin >> obecna;

        if (obecna < 0)
        {
            licznikLiczbUjemnnych++;
            ostatniaUjemna = obecna;

            if (pierwszaUjemna)
            {
                pierwszaUjemna = false;
                najwiekszaUjemna = obecna;
            }

            if (obecna > najwiekszaUjemna)
            {
                najwiekszaUjemna = obecna;
            }
        }

    } while (!(obecna >= R1 && obecna <= R2));

    if (licznikLiczbUjemnnych > 0)
    {
        std::cout << "Ilość ujemnych: " << licznikLiczbUjemnnych << std::endl;
        std::cout << "Ostatnia ujemna: " << ostatniaUjemna << std::endl;
        std::cout << "Najwieksza ujemna: " << najwiekszaUjemna << std::endl;
    }
    else
    {
        std::cout << "Brak liczb ujemnych" << std::endl;
    }
}