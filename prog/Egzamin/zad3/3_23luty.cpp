#include <iostream>

const int A{0}, B{6}, C{0}, D{20}, n{8};

struct Punkty
{
    int x;
    int y;
};

int someFunction(Punkty arr[], int zakres1, int zakres2, int liczbaElementow)
{
    std::cout << "asd";
    int licznikowPunktow{0};

    for (int i = 0; i < n; i++)
    {
        arr[i].x = rand() % (zakres2 - zakres1 + 1) + zakres1;
        arr[i].y = rand() % (zakres2 - zakres1 + 1) + zakres2;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i].x == 0 || arr[i].y == 0)
        {
            licznikowPunktow++;
        }
    }

    if (licznikowPunktow >= liczbaElementow)
    {
        for (int i = 0; i < n / 2; i++)
        {
            Punkty temp = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i].x << arr[i].y;
    }

    if (licznikowPunktow > liczbaElementow)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    Punkty AB[n], CD[n];
    int a, c;
    // zapisac
    a = someFunction(AB, A, B, 4);
    c = someFunction(CD, C, D, 3);

    if (a && c)
    {
        std::cout << "Odwrocono w obu";
    }
    else
    {
        std::cout << "nie odworcono";
    }
}