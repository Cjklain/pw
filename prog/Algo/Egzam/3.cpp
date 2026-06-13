#include <iostream>
#include <ctime>

struct Elem
{
    std::string imie;
    std::string nazwisko;
    int wiek;
    Elem *next;
};

Elem funkcja(Elem *&head)
{
    Elem awaryjny;
    awaryjny.imie = "?";
    awaryjny.nazwisko = "?";
    awaryjny.wiek = 0;

    Elem *stud = new Elem;
    stud->imie = "Asd";
    stud->nazwisko = "qd";
    stud->wiek = 22;

    if (head == NULL)
    {
        head = stud;
    }
    else
    {
        Elem *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = stud;
    }

    if (head->next == NULL)
    {
        return awaryjny;
    }
    else
    {
        Elem *temp2 = head;
        Elem *drugi = head->next;

        temp2->next = drugi->next;

        awaryjny.imie = drugi->imie;
        awaryjny.nazwisko = drugi->nazwisko;
        awaryjny.wiek = drugi->wiek;

        delete drugi;

        return awaryjny;
    }
}