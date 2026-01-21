#include <iostream>
#include <fstream>

const int n = 5;

struct Punkt
{
    int x;
    int y;
};

int main()
{
    Punkt A[n];
    std::ifstream plik;

    std::ofstream testowy("pr.txt");
    testowy << "10 5" << std::endl;
    testowy << "2 8" << std::endl;
    testowy << "3 3" << std::endl;
    testowy << "4 9" << std::endl;
    testowy << "50 5" << std::endl;
    testowy.close();

    plik.open("pr.txt");
    for (int i = 0; i < n; i++)
    {
        plik >> A[i].x >> A[i].y;
    }
    plik.close();

    for (int i = 0; i < n; i++)
    {
        std::cout << "Punkt " << i << " " << A[i].x << ", " << A[i].y << " " << std::endl;
    }

    if (A[0].y == A[n - 1].y)
    {
        Punkt temp = A[0];
        A[0] = A[n - 1];
        A[n - 1] = temp;
    }
    else
    {
        std::cout << "Wspolrzedne y skrajnych punktow sa rozne";
    }

    return 0;
}