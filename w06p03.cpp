#include <iostream>

using namespace std;

class pracownik
{
private:
    static int ile;
    int Id;
    string imie;
    string nazwisko;

public:
    pracownik(string im = "NN", string nazw = "NN") : imie(im), nazwisko(nazw)
    {
        Id = ++ile;
    }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getId() { return Id; }
};
int pracownik::ile = 0;

int main()
{
    pracownik p1("aaa", "AAA"), p2("bbb", "BBB"), p3("ccc", "CCC");
    cout << p1.getId() << " " << p1.getImie() << " " << p1.getNazwisko() << endl;
    cout << p2.getId() << " " << p2.getImie() << " " << p2.getNazwisko() << endl;
    cout << p3.getId() << " " << p3.getImie() << " " << p3.getNazwisko() << endl;
    return 0;
}