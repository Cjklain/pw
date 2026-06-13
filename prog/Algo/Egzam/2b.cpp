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

    Elem *nowy = new Elem;
    nowy->liczba = l;
    nowy->znak = z;

    if (head->next == NULL)
    {
        nowy->next = head;
        head = nowy;
    }
    else
    {
        Elem *temp4 = head;

        while (temp4->next->next != NULL)
        {
            temp4 = temp4->next;
        }

        nowy->next = temp4->next;
        temp4->next = nowy;
    }

    return nowy;
}