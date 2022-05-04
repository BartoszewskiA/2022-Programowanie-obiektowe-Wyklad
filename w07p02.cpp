#include <iostream>
#include <sstream>

using namespace std;

class osoba
{
protected:
    string imie;
    string nazwisko;

public:
    //osoba() {}
    osoba(string im, string nazw) : imie(im), nazwisko(nazw) {}
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    void setImie(string im) { imie = im; }
    void setNazwisko(string nazw) { nazwisko = nazw; }
    string toString()
    {
        stringstream bufor;
        bufor << "Imie: " << imie
              << " Nazwisko: " << nazwisko;

        return bufor.str();
    }
};

class pracownik : public osoba
{
protected:
    string stanowisko;

public:
    // pracownik(string im, string nazw, string st)
    // {
    //     imie=im;
    //     nazwisko = nazw;
    //     stanowisko = st;
    // }
    pracownik(string im, string nazw, string st) : osoba(im, nazw), stanowisko(st) {}
    string getStanowisko() { return stanowisko; }
    void setStanowisko(string st) { stanowisko = st; }
    string toString()
    {
        stringstream bufor;
        bufor << osoba::toString()
              << " Stanowisko: " << stanowisko;

        return bufor.str();
    }
};

int main()
{
    pracownik p1("aaa", "AAAA", "informatyk");
    // p1.setImie("aaaaa");
    // p1.setNazwisko("AAAAAA");
    // p1.setStanowisko("informatyk");

    osoba s1("aaaa", "AAAA");
    // s1.setImie("aaaaa");
    // s1.setNazwisko("AAAAAA");
    cout << p1.toString();
    cout << s1.toString();
    return 0;
}
