#include <iostream>

using namespace std;

class test
{
private:
    int x;
    const double pi;
    string wyraz;

public:
    test():x(0), pi(3.14), wyraz("XXXX") {}
    test(int px, double pz, string w) :x(px), pi(pz), wyraz(w)
    { 
        // x=px;
        // pi=pz;
        // wyraz=w;
        cout << " konstruktor "; 
    }
    int getX() { return x; }
    double getPi() { return pi; }
    string getWyraz() { return wyraz; }
};
int main()
{
    // test t1(10, 3.14, "aaaaa");
    test t1;
    cout << t1.getX() << " " << t1.getPi() << " " << t1.getWyraz();
    return 0;
}