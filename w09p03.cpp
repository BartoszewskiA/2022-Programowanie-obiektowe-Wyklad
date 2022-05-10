#include <iostream>
#include <sstream>

using namespace std;

class student
{
private:
    int Id;
    static int ile;
    string imie;
    string nazwisko;
    string kierunek;
    string wydzial;
    string *historia_studiow;

public:
    student(string im, string nazw, string k, string w) : imie(im), nazwisko(nazw), kierunek(k), wydzial(w)
    {
        historia_studiow = new string;
        *historia_studiow = "";
        Id = ++ile;
    }
    // konstruktor kopiujacy
    student(const student &wzorzec, string im, string nazw)
    {
        Id = ++ile;
        historia_studiow = new string;
        *historia_studiow = "";
        imie = im;
        nazwisko = nazw;
        kierunek = wzorzec.kierunek;
        wydzial = wzorzec.wydzial;
    }

    void dopisz(string wpis)
    {
        *historia_studiow += "\n";
        *historia_studiow += wpis;
    }

    string toString()
    {
        stringstream temp;
        temp << Id << " " << imie << " " << nazwisko << "\n"
             << kierunek << " " << wydzial << "\n"
             << *historia_studiow << "\n";
        return temp.str();
    }

    ~student()
    {
        delete historia_studiow;
    }
};

int student::ile = 0;

int main()
{
    student wzorzec1("", "", "Informatyka", "WTEiI");
    student wzorzec2("", "", "Wzornictwo", "Wydzial Sztuki");

    // student s1("Jan", "Kowalski", "Informatyka", "WTEiI");
    student s1(wzorzec1, "Jan", "Kowalski");
    s1.dopisz("rozpoczol studia");
    s1.dopisz("zakonczyl studia");
    cout << s1.toString();
    return 0;
}