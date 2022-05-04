#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;
    int rok_urodzenia;
public:
    void setImie(string im) {imie = im;}
    void setNazwisko(string nazw) {nazwisko = nazw;}
    void setWiek(int w) {}
    string getImie() {return imie;}
    string getNazwisko() {return nazwisko;}
    int getWiek();
};

int main()
{
    osoba ktos;
    ktos.setImie("Jan");
    ktos.setNazwisko("Kowalski");

    osoba *ktos_2 = new osoba;
    ktos_2->setImie("Ola");
    ktos_2->setNazwisko("Nowak");

    cout<< ktos.getImie();

    delete ktos_2;
    return 0;
}