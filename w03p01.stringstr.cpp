#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream bufor;
    int i = 101;
    double d = 3.14;
    bufor << "Liczba calkowita: " << i << endl
          << "Liczba zmiennoprzecinkowa: " << d;
    string s = bufor.str();
    cout << s;
    return 0;
}