#include <iostream>

using namespace std;

class osoba
{
public:
    string *imie;
    osoba(string im)
    {
        imie = new string;
        *imie = im;
    }
    osoba(osoba &wzorzec)
    {
        imie = new string;
        *imie = * wzorzec.imie;
        // *imie = wzorzec.getImie();
    }
    string getImie() { return *imie; }
    void setImie(string im) { *imie = im; }
    ~osoba()
    {
        delete imie;
    }
};

int main()
{
    osoba p1("Ktos");
    osoba p2 = p1;
    p2.setImie("ktos inny");
    cout << p1.getImie()
         << endl
         << p2.getImie();
    return 0;
}