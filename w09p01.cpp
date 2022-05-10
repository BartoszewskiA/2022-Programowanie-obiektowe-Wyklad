#include <iostream>
#include <sstream>

using namespace std;

class klasaA
{
private:
    int x;
    string podpis;

public:
    klasaA() : x(0), podpis("utworzony przez konstruktor domyslny")
    {
        cout << "Zadzialal konstruktor domyslny\n";
    }

    klasaA(int px) : x(px), podpis("utworzony przez konstruktor z parametrem")
    {
        cout << "Zadzialal konstruktor z parametrem\n";
    }

    // konstruktor kopiujacy

    klasaA(klasaA &wzorzec) : x(wzorzec.x), podpis("utworzony przez konstruktor kopiujacy")
    {
        cout << "Zadzialal konstruktor kopiujacy\n";
    }
    string toString()
    {
        stringstream temp;
        temp << "x="
             << x
             << " "
             << podpis
             << endl;
        return temp.str();
    }
};

int main()
{
    klasaA a1(200);

    klasaA a2 = a1;

    cout<<a1.toString();
    cout<<a2.toString();


    return 0;
}