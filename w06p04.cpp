#include <iostream>
#include <fstream>

using namespace std;

class pracownik
{
private:
    static int ile;
    int Id;
    string imie;
    string nazwisko;
    void zapisz()
    {
        fstream plik;
        plik.open("baza.txt",ios::app);
        plik<<Id<<";"<<imie<<";"<<nazwisko<<";"<<endl;
        plik.close();
    }
public:
    pracownik(string im = "NN", string nazw = "NN") : imie(im), nazwisko(nazw)
    {
        Id = ++ile;
        zapisz();
    }
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getId() { return Id; }
};
int pracownik::ile = 0;

int main()
{
    pracownik *p1 = new pracownik("aaa", "AAA");
    pracownik *p2 = new pracownik("bbb", "BBB");
    pracownik *p3 = new pracownik("ccc", "CCC");
    delete p2;
    p2 = new pracownik("ddd", "DDD");

    cout << p1->getId() << " " << p1->getImie() << " " << p1->getNazwisko() << endl;
    cout << p2->getId() << " " << p2->getImie() << " " << p2->getNazwisko() << endl;
    cout << p3->getId() << " " << p3->getImie() << " " << p3->getNazwisko() << endl;
    return 0;
}