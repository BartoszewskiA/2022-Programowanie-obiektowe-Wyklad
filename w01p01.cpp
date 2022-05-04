#include <iostream>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
};

int main()
{
    osoba ktos;
    ktos.imie = "Jan";
    ktos.nazwisko = "Kowalski";

    osoba *ktos_2 = new osoba;
    ktos_2->imie = "aaa";
    cout << ktos.imie;
    cout << ktos_2->imie;

    delete ktos_2;
    return 0;
}
