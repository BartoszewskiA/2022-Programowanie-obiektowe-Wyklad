#include <iostream>

using namespace std;

class test
{
private:
    int x;
    static int licznik;

public:
    test(int px = 0) : x(px)
    {
        licznik++;
    }
    static int getIle() { return licznik; }
    ~test()
    {
        licznik--;
    }
};
int test::licznik = 0;

int main()
{
    // test p1, p2, p3, p4;
    test *p1 = new test;
    test *p2 = new test;
    test *p3 = new test;
    test *p4 = new test;
    cout << "Obieltow jest: " << p2->getIle();
    delete p1;
    delete p2; 
    delete p3;
    delete p4;

    cout << "\nPo usunieciu obieltow jest: " << test::getIle();
    return 0;
}