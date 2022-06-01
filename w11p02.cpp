#include <iostream>

using namespace std;

class bazowa // nigdy nie bedzie tworzony obiekt klasy bazowej
{
public:
    void virtual przedstawSie()=0;
};

class pochodna_1 : public bazowa
{
public:
    void przedstawSie() { cout << "klasa pochodna 1\n"; }
};

class pochodna_2 : public bazowa
{
public:
    void przedstawSie() { cout << "klasa pochodna 2\n"; }
};

int main()
{

    bazowa *k1 = new pochodna_1;
    bazowa *k2 = new pochodna_2;
    bazowa *k =  new bazowa;
    k1->przedstawSie();
    k2->przedstawSie();
    return 0;
}