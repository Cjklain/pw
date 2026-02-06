#include <iostream>

const int n{5}, G{4};

struct Student
{
    std::string imie;
    int ocena;
    int rok;
};

int someFunction(Student arr[n], int rok, char znak, int &liczbaStudentow)
{
    int wiekszaOdG{0};

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i].imie >> arr[i].ocena >> arr[i].rok;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i].imie[0] == znak && arr[i].rok == rok)
        {
            std::cout << arr[i].imie << arr[i].ocena;
            liczbaStudentow++;
        }

        if (arr[i].ocena >= G)
        {
            wiekszaOdG++;
        }
    }

    return wiekszaOdG;
}

int main()
{
    Student Inz[n], Mgr[n];
    int in, mg, stIn, stMg;

    stIn = someFunction(Inz, 1, 'W', in);
    stMg = someFunction(Mgr, 4, 'P', mg);

    std::cout << "Łaczna liczba " << in + mg;

    if (stIn > stMg)
    {
        std::cout << "tablica in";
    }
    else if (stMg > stIn)
    {
        std::cout << "tablica mg";
    }
    else
    {
        std::cout << "rowno";
    }

    std::cout << "asd";
}