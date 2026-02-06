#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

const int A{2}, B{6}, n{6}, C{8}, D{12};

struct Dane
{
    int x;
    int y;
};

int jakasFunkcja(Dane arr[n], int stala1, int stala2, int limit)
{
    bool odwrocenie = false;
    for (int i = 0; i < n; i++)
    {
        arr[i].x = (rand() % stala1) + stala2;
        arr[i].y = (rand() % stala1) + stala2;
    }

    int licznik = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].x == 0 || arr[i].y == 0)
        {
            licznik++;
        }
    }

    if (licznik > limit)
    {
        Dane temp;
        odwrocenie = true;
        for (int i = 0; i < n / 2; i++)
        {
            temp = arr[n - 1 - i];
            arr[n - 1 - i] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i].x << " " << arr[i].y;
    }

    if (odwrocenie)
    {
        std::cout << "Dokonano odworcenia";
        return 1;
    }
    else
    {
        std::cout << "NieDokonano odworcenia";
        return 0;
    }
}

int main()
{
    Dane AB[n];
    Dane CD[n];

    jakasFunkcja(AB, A, B, 4);
    jakasFunkcja(CD, C, D, 3);
}
