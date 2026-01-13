#include <iostream>

const int D = 2;
const int G = 6;
const int N = 5;

int main()
{

    int k, pierwszaDuza{0}, wiekszaOd{0};
    std::string napis;
    long double tablica[N], suma{0}, srednia{0};

    do
    {
        std::cout << "Podaj liczbę: " << std::endl;
        std::cin >> k;

    } while (!(k >= D && k <= G));

    std::cout << "Podaj napis: " << std::endl;
    for (int i = 0; i < k; i++)
    {
        std::cin >> napis;

        if (isupper(napis.front()))
        {
            pierwszaDuza++;
        }
    }
    std::cout << "Pierwsza duża: " << pierwszaDuza << std::endl;

    std::cout << "Podaj ciąg liczb: " << std::endl;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tablica[i];
        suma += tablica[i];
    }

    srednia = suma / N;

    for (int i = 0; i < N; i++)
    {
        if (tablica[i] > srednia)
        {
            wiekszaOd++;
        }
    }

    std::cout
        << "średnia: " << srednia << std::endl;

    std::cout << "Większa od średniej: " << wiekszaOd << std::endl;

    return 0;
}
