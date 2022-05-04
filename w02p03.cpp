#include <iostream>
#include <ctime>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;
int rok_urodzenia;

public:
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
    void setWiek(int w);
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getWiek();
    void przedstaw_sie();
};

void osoba::przedstaw_sie()
{
    cout << "Imie: " << imie << endl
         << "Nazwisko: " << nazwisko << endl
         << "Wiek: " << getWiek() << endl;
}

void osoba::setWiek(int w)
{
    time_t czas_systemowy = time(NULL);
    tm *czas_lokalny = localtime(&czas_systemowy);
    rok_urodzenia = (czas_lokalny->tm_year + 1900) - w;
}

int osoba::getWiek()
{
    time_t czas_systemowy = time(NULL);
    tm *czas_lokalny = localtime(&czas_systemowy);
    return (czas_lokalny->tm_year + 1900) - rok_urodzenia;
}

int main()
{
    osoba ktos;
    ktos.setImie("Jan");
    ktos.setNazwisko("Kowalski");
    ktos.setWiek(10);
    ktos.przedstaw_sie();

    // osoba *ktos_2 = new osoba;
    // ktos_2->setImie("Ola");
    // ktos_2->setNazwisko("Nowak");

    // ktos.przedstaw_sie();

    // delete ktos_2;
    return 0;
}