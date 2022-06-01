#include <iostream>

using namespace std;

class bazowa
{
public:
    int a;
    void virtual przedstawSie() { cout << "klasa bazowa\n"; }
};

class pochodna : public bazowa
{
public:
    int b;
    void przedstawSie() { cout << "klasa pochodna\n"; }
};

int main()
{
    // bazowa k1;
    // pochodna k2;
    // k1.przedstawSie();
    // k2.przedstawSie();
    // bazowa * baz = new bazowa;
    // pochodna * po = new pochodna;
    // baz->przedstawSie();
    // po->przedstawSie();
    bazowa *k = new pochodna;
    k->przedstawSie();
    return 0;
}