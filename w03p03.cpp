#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class osoba
{
private:
    string imie;
    int wiek;

public:
    osoba()
    {
        imie = "NN";
        wiek = 0;
        cout << " - konstrukor bez parametrow - ";
    }
    osoba(string kto, int w)
    {
        imie = kto;
        wiek = w;
        cout << " - konstrukor z parametrami - ";
    }
    string toString();
    ~osoba()
    {
        cout<<" - destruktor - ";
    }
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
    //osoba ktos("Jan", 30);
    osoba ktos;
    osoba * ktos = new osoba("aaa",10);
    cout << ktos->toString();
    delete ktos;
    return 0;
}