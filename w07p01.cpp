#include <iostream>
#include <sstream>

using namespace std;

class osoba
{
    // private:
protected:
    string imie;
    string nazwisko;

public:
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
};

class pracownik : public osoba
{
    // private:
protected:
    string stanowisko;

public:
    string getStanowisko() { return stanowisko; }
    void setStanowisko(string st) { stanowisko = st; }
    // string toString()
    // {
    //     stringstream bufor;
    //     bufor << "Imie: " << getImie()
    //           << " Nazwisko: " << getNazwisko()
    //           << " Stanowisko: "<<stanowisko;

    //     return bufor.str();
    // }
    string toString()
    {
        stringstream bufor;
        bufor << "Imie: " << imie
              << " Nazwisko: " << nazwisko
              << " Stanowisko: " << stanowisko;

        return bufor.str();
    }
};

int main()
{
    pracownik p1;
    p1.setImie("aaaaa");
    p1.setNazwisko("AAAAAA");
    p1.setStanowisko("informatyk");

    cout << p1.getImie() << " " << p1.getNazwisko() << " " << p1.getStanowisko();
    return 0;
}
