#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const string imie = "NN";
const int wiek = 0;

class osoba
{
private:
    string imie;
    int wiek;

public:
    osoba()
    {
        this->imie = ::imie;
        this->wiek = ::wiek;
    }
    osoba(string imie, int wiek)
    {
        this->imie = imie;
        this->wiek = wiek;
    }
    void setImie(string imie) { this->imie = imie; }
    void setWiek(int wiek) { this->wiek = wiek; }
    string toString();
};

string osoba::toString()
{
    stringstream bufor;
    bufor << "Imie: " << imie
          << " Wiek: " << wiek;
    return bufor.str();
}

int main()
{
    osoba ktos;
    cout<<ktos.toString();
    return 0;
}