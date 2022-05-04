#include <iostream>
#include <cmath>

using namespace std;

class wektor
{
private:
    int x;
    int y;

public:
    wektor() 
    {
        // int a = -20;
        // int b = -1;
        // x = rand() % (b - a + 1) + a;
        // y = rand() % (b - a + 1) + a;
        wylosujXY();
    }
    void setX(int px) { x = px; }
    void setY(int py) { y = py; }
    int getX() { return x; }
    int getY() { return y; }
    double getDlugosc();
    void wylosujXY();
};

double wektor::getDlugosc()
{
    return sqrt(x * x + y * y);
}
void wektor::wylosujXY()
{
    int a = 0;
    int b = 100;
    x = rand() % (b - a + 1) + a;
    y = rand() % (b - a + 1) + a;
}

int main()
{
    wektor w1;
    cout << w1.getX() << " ; " << w1.getY();
    return 0;
}