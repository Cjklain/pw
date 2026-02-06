#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

const int n{5}, Sz{6};
const double MaxOcena{100.0};

struct Student
{
    char inicjalImie;
    char inicjalNazwisko;
    double punkty;
};

double wykonajDlaGrupy(Student arr[n], double &srednia)
{
    double najwiekszaOcena{0.0};

    for (int i = 0; i < n; i++)
    {
        arr[i].inicjalImie = (rand() % 26) + 65;
        arr[i].inicjalNazwisko = (rand() % 26) + 65;
        arr[i].punkty = MaxOcena * rand() / double(RAND_MAX);
        srednia += arr[i].punkty;
        if (arr[i].punkty > najwiekszaOcena)
        {
            najwiekszaOcena = arr[i].punkty;
        }

        std::cout << arr[i].inicjalImie << arr[i].inicjalNazwisko << " " << arr[i].punkty << " ";
    }

    srednia = srednia / n;

    std::cout << std::endl;

    return najwiekszaOcena;
}

int main()
{
    srand(time(0));
    std::cout << std::fixed << std::setprecision(2);
    Student G1[n], G2[n];
    double sredniaG1{0.0}, sredniaG2{0.0}, maxOcenaG1, maxOcenaG2;
    maxOcenaG1 = wykonajDlaGrupy(G1, sredniaG1);
    maxOcenaG2 = wykonajDlaGrupy(G2, sredniaG2);

    std::cout << "Róźnica między najwyższymi ocenami w grupach: " << maxOcenaG1 - maxOcenaG2 << std::endl;

    if (sredniaG1 > sredniaG2)
    {
        std::cout << "Średnia większa w G1 " << std::endl;
    }
    else if (sredniaG2 > sredniaG1)
    {
        std::cout << "Średnia większa w G2 " << std::endl;
    }
    else
    {
        std::cout << "Średnie są równe " << std::endl;
    }
}