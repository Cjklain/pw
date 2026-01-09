#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int D = 7;

    int suma_dwucyf_ujemna = 0, najwieksza_ujemna, aktualna, poprzednia, licznik_srednia = 0, licznik = 0;
    bool pierwsza_iteracja = true, brak_pierwszej_ujemnej = true;

    do
    {
        cout << "Podaj liczbę: ";
        cin >> aktualna;

        if (aktualna < 0)
        {
            if (brak_pierwszej_ujemnej)
            {
                najwieksza_ujemna = aktualna;
                brak_pierwszej_ujemnej = false;
            }

            if (aktualna > najwieksza_ujemna)
            {
                najwieksza_ujemna = aktualna;
            }

            if (aktualna >= -99 && aktualna <= -10)
            {
                suma_dwucyf_ujemna += aktualna;
                licznik_srednia++;
            }
        }

        if (!pierwsza_iteracja)
        {
            if (aktualna > poprzednia)
            {
                licznik++;
            }
        }

        poprzednia = aktualna;
    } while (!(aktualna % 2 == 0 && aktualna % D == 0));

    if (brak_pierwszej_ujemnej)
    {
        cout << "Nie podano liczby ujemnej" << endl;
    }
    else
    {
        cout << "\nNajwiększa ujemna: " << najwieksza_ujemna << endl;
    }

    if (licznik_srednia == 0)
    {
        cout << "Nie można podać średniej, dzielenie przez zero" << endl;
    }
    else
    {
        long double srednia = suma_dwucyf_ujemna / (1.0 * licznik_srednia);
        cout << "Średnia liczb dwucyfrowych ujemnych: " << srednia << endl;
    }
    cout << "Ilość wystąpień typu, większa od poprzednika: " << licznik << endl;

    return 0;
};