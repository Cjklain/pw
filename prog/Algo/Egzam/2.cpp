#include <iostream>
#include <ctime>

struct Elem
{
    int liczba;
    char znak;
    Elem *next;
};

Elem *funkcja(Elem *&head, int l, char z)
{
    if (head == NULL)
    {
        return NULL;
    }

    Elem *temp = head;
    int licznik = 0;

    while (temp != NULL)
    {
        licznik++;
        temp = temp->next;
    }

    Elem *nowy = new Elem;
    nowy->liczba = l;
    nowy->znak = z;

    Elem *przeos = head;

    if (licznik <= 2)
    {
        nowy->next = head;
        head = nowy;
    }
    else
    {
        for (int i = 1; i < licznik - 1; i++)
        {
            przeos = przeos->next;
        }

        nowy->next = przeos->next;
        przeos->next = nowy;
    }

    return nowy;
}