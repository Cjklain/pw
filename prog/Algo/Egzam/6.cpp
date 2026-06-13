#include <iostream>
#include <ctime>

struct Elem
{
    int liczba;
    Elem *next;
};

int funkcja(Elem *&head, int liczbaDoUsuniecia, int pierwsza, int druga)
{
    Elem *l1 = new Elem;
    Elem *l2 = new Elem;

    l1->liczba = pierwsza;
    l2->liczba = druga;

    l1->next = l2;
    l2->next = NULL;

    if (head == NULL)
    {
        head = l1;
        return 0;
    }
    else
    {
        int licznik = 0;
        for (int i = 1; i <= liczbaDoUsuniecia; i++)
        {
            licznik++;
            Elem *usun = head;
            head = head->next;
            delete usun;
            if (head == NULL)
            {
                break;
            }
        }
        if (head == NULL)
        {
            head = l1;
        }
        else
        {
            Elem *ost = head;
            while (ost->next != NULL)
            {
                ost = ost->next;
            }
            ost->next = l1;
        }

        return licznik;
    }
}