#include <iostream>

const int n{10};

struct dane
{
    std::string imie;
    std::string nazwisko;
    int wiek;
};

void someFunction(dane arr[n], char litera, int &roznica)
{
    int maxWiekI{0}, minWiekI{0};

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i].imie >> arr[i].nazwisko >> arr[i].wiek;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i].imie[0] == litera)
        {
            std::cout << arr[i].imie << arr[i].nazwisko << arr[i].wiek;
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (arr[i].wiek > arr[maxWiekI].wiek)
        {
            maxWiekI = i;
        }

        if (arr[i].wiek < arr[minWiekI].wiek)
        {
            minWiekI = i;
        }
    }

    dane temp;

    roznica = arr[maxWiekI].wiek - arr[minWiekI].wiek;

    temp = arr[maxWiekI];
    arr[maxWiekI] = arr[minWiekI];
    arr[minWiekI] = temp;
}

int main()
{
    dane A[n], B[n];
    int roznicaA{0}, roznicaB{0};

    someFunction(A, 'R', roznicaA);
    someFunction(B, 'M', roznicaB);

    if (roznicaA > roznicaB)
    {
        std::cout << "A";
    }
    else if (roznicaB > roznicaA)
    {
        std::cout << "B";
    }
    else
    {
        std::cout << "rowne";
    }
}