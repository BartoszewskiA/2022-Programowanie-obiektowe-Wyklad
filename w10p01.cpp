#include <iostream>
#include <cmath>

using namespace std;

class wektor
{
private:
    int x;
    int y;

public:
    wektor(int px = 0, int py = 0) : x(px), y(py) {}
    int getX() { return x; }
    int getY() { return y; }
};

wektor operator+(wektor w1, wektor w2)
{
    int x = w1.getX() + w2.getX();
    int y = w1.getY() + w2.getY();
    wektor wynik(x, y);
    return wynik;
}

wektor operator*(wektor w1, int m)
{
    int x = w1.getX() * m;
    int y = w1.getY() * m;
    wektor wynik(x, y);
    return wynik;
}

wektor operator*(int m, wektor w1)
{
    int x = w1.getX() * m;
    int y = w1.getY() * m;
    wektor wynik(x, y);
    return wynik;
}

wektor operator*(double m, wektor w1)
{
    int x = round(w1.getX() * m);
    int y = round(w1.getY() * m);
    wektor wynik(x, y);
    return wynik;
}

wektor operator*(wektor w1, double m)
{`
    int x = round(w1.getX() * m);
    int y = round(w1.getY() * m);
    wektor wynik(x, y);
    return wynik;
}

int main()
{
    wektor wynik, w1(10, 6), w2(-5, 11);
    // wynik = w1 + w2;
    wynik = 2 * w1;
    cout << wynik.getX() << ";" << wynik.getY();
    return 0;
}