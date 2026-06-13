#include <iostream>
#include <ctime>

struct Elem
{
    int liczba;
    Elem *next;
};

bool funkcja(Elem *&head, int numer)
{
    if (head == NULL)
    {
        return false;
    }

    Elem *temp = head;

    int max = head->liczba;

    while (temp != NULL)
    {
        if (temp->liczba > max)
        {
            max = temp->liczba;
        }
        temp = temp->next;
    }

    Elem *last = head;

    while (last->next != NULL)
    {
        last = last->next;
    }

    Elem *nowy = new Elem;
    nowy->liczba = max;
    nowy->next = NULL;
    last->next = nowy;

    Elem *temp2 = head;
    int licznik = 0;

    while (temp2 != head)
    {
        licznik++;
        temp2 = temp2->next;
    }

    if (numer < 1 || numer > licznik)
    {
        return false;
    }

    if (numer == 1)
    {
        Elem *temp3 = head;
        head = head->next;
        delete temp3;
    }
    else
    {
        Elem *temp4 = head;
        for (int i = 1; i < numer - 1; i++)
        {
            temp4 = temp4->next;
        }

        Elem *us = temp4->next;

        temp4->next = us->next;
        delete us;
    }

    return true;
}