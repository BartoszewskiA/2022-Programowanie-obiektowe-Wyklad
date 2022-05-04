#include <iostream>

using namespace std;

class test
{
public:
    int dana_obiektu;
    static int dana_wspolna;
};
int test::dana_wspolna = 0;

int main()
{
    test d1, d2;
    d1.dana_obiektu = 101;
    d2.dana_obiektu = 201;
    d1.dana_wspolna = 10;
    d2.dana_wspolna = 20;

    test::dana_wspolna = 1111;
    //test::dana_obiektu = 10; - błąd
    cout << "d1: " << d1.dana_obiektu << " " << d1.dana_wspolna << endl;
    cout << "d2: " << d2.dana_obiektu << " " << d2.dana_wspolna;
    return 0;
}