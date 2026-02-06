#include <iostream>
#include <cstdlib>
#include <ctime>

const int n{10};

struct rekord
{
    int x;
    int y;
};

int someFunction(rekord arr[n], int zakres1, int zakres2, int limit)
{
    std::cout << "asd";
    int licznik{0};

    for (int i = 0; i < n; i++)
    {
        arr[i].x = rand() % (zakres2 - zakres1 + 1) + zakres1;
        arr[i].y = rand() % (zakres2 - zakres1 + 1) + zakres1;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i].x > 0 && arr[i].y > 0)
        {
            licznik++;
        }
    }

    if (licznik >= limit)
    {
        for (int i = 0; i < n / 2; i++)
        {
            rekord temp = arr[n - 1 - i];
            arr[n - 1 - i] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << "x" << arr[i].x << " " << "y" << arr[i].y;
    }

    if (licznik >= limit)
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
    rekord T1[n];
    rekord T2[n];
    const int D1{5}, G1{7}, D2{1}, G2{8};
    int a, b;
    srand(time(NULL));
    a = someFunction(T1, D1, G1, 6);
    b = someFunction(T2, D2, G2, 5);

    if (a && b)
    {
        std::cout << "TAK";
    }
    else
    {
        std::cout << "NIE";
    }
}