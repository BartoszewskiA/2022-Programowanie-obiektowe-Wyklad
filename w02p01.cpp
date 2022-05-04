#include <iostream>

using namespace std;

class osoba
{
public:
    string imie;
    string nazwisko;
    void przedstaw_sie()
    {
        cout << "Imie: " << imie << endl
             << "Nazwisko: " << nazwisko << endl;
    }
};

int main()
{
    osoba ktos;
    ktos.imie = "Jan";
    ktos.nazwisko = "Kowalski";

    osoba *ktos_2 = new osoba;
    ktos_2->imie = "Ola";
    ktos_2->nazwisko = "Nowak";

    ktos.przedstaw_sie();
    ktos_2->przedstaw_sie();

    delete ktos_2;
    return 0;
}