#include <iostream>
#include <ctime>

const int n{5};

struct Tauto
{
    std::string marka;
    double przebieg;
    double cena;
    int rokProdukcji;
    Tauto *nastepny;
};

void drukujListe(Tauto *glowa)
{
    if (glowa == NULL)
    {
        std::cout << "Pusta lista" << std::endl;
        return;
    }

    while (glowa != NULL)
    {
        std::cout << "Marka: " << glowa->marka << std::endl;
        std::cout << "Przebieg: " << glowa->przebieg << std::endl;
        std::cout << "Cena: " << glowa->cena << std::endl;
        std::cout << "Rok produkcji: " << glowa->rokProdukcji << std::endl;

        glowa = glowa->nastepny;
    }
}

void kasujListe(Tauto *&glowa)
{
    while (glowa != NULL)
    {
        Tauto *doUsuniecia = glowa;
        glowa = glowa->nastepny;
        delete doUsuniecia;
    }
}

int policzDlugosc(Tauto *glowa)
{
    int i = 0;
    while (glowa != NULL)
    {
        glowa = glowa->nastepny;
        i++;
    }

    return i;
}

int main()
{
    srand(time(0));
    Tauto *glowa = NULL;

    for (int i = 0; i < n; i++)
    {
        Tauto *pomocniczny = new Tauto;

        std::cout << "Podaj marke: ";
        std::cin >> pomocniczny->marka;
        std::cout << "Podaj przebieg: ";
        std::cin >> pomocniczny->przebieg;
        std::cout << "Podaj cene: ";
        std::cin >> pomocniczny->cena;
        std::cout << "Podaj rok produkcji: ";
        std::cin >> pomocniczny->rokProdukcji;
        pomocniczny->nastepny = glowa;

        glowa = pomocniczny;
    }

    if (glowa == NULL)
    {
        std::cout << "Pusta lista" << std::endl;
        return 0;
    }

    drukujListe(glowa);

    double sumaPrzebiegu = 0;
    int licznikAut = 0;

    std::string ciag;
    std::cout << "Ciag znakow: ";
    std::cin >> ciag;

    int dlugoscListy = policzDlugosc(glowa);

    Tauto *orginalnaKolejnosc[dlugoscListy];
    Tauto *temp = glowa;

    for (int i = 0; i < dlugoscListy; i++)
    {
        orginalnaKolejnosc[i] = temp;
        temp = temp->nastepny;
    }

    Tauto *aktualny = NULL;
    Tauto *poprzedni = NULL;

    for (int i = 0; i < dlugoscListy; i++)
    {
        aktualny = orginalnaKolejnosc[i];
        sumaPrzebiegu = 0;
        licznikAut = 0;

        Tauto *temp = glowa;
        while (aktualny != temp)
        {
            sumaPrzebiegu += temp->przebieg;
            licznikAut++;
            temp = temp->nastepny;
        }

        bool zawiera = (aktualny->marka.find_first_of(ciag) != std::string::npos);

        if (licznikAut > 0 && aktualny->przebieg > (sumaPrzebiegu / licznikAut) && !zawiera)
        {
            poprzedni = glowa;
            while (poprzedni->nastepny != aktualny)
            {
                poprzedni = poprzedni->nastepny;
            }

            int k = (rand() % dlugoscListy) + 1;

            int docelowyIndeks = dlugoscListy - k;

            if (docelowyIndeks <= 0)
            {
                poprzedni->nastepny = aktualny->nastepny;
                aktualny->nastepny = glowa;
                glowa = aktualny;
            }
            else
            {
                Tauto *docelowy = glowa;

                for (int j = 0; j < docelowyIndeks - 1 && docelowy->nastepny != NULL; j++)
                {
                    docelowy = docelowy->nastepny;
                }
                if (aktualny == docelowy)
                {
                    continue;
                }
                poprzedni->nastepny = aktualny->nastepny;
                aktualny->nastepny = docelowy->nastepny;
                docelowy->nastepny = aktualny;
            }
        }
    }

    drukujListe(glowa);

    kasujListe(glowa);

    drukujListe(glowa);
}
