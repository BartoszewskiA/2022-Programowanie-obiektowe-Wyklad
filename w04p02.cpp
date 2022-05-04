#include <iostream>

using namespace std;

class osoba
{
private:
    string imie;
    string nazwisko;

public:
    osoba(string im = "NN", string nazw = "NN") : imie(im), nazwisko(nazw) 
    {
        cout <<" - konstruktor - ";
    }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    void setImie(string imie) { this->imie = imie; }
    void setNazwisko(string nazwisko) { this->nazwisko = nazwisko; }
    ~osoba() 
    {
        cout<< " - destruktor - ";
    }
};
void rodo(osoba &ktos);
int main()
{
    osoba osoba01("Jan", "Kowalski");
    rodo(osoba01);
    cout << "imie: " << osoba01.getImie() << endl
         << "nazwisko: " << osoba01.getNazwisko();

    return 0;
}

void rodo(osoba &ktos)
{
    string s = ktos.getNazwisko();
    for (int i = 1; i < s.length(); i++)
        s[i] = '*';
    ktos.setNazwisko(s);
}