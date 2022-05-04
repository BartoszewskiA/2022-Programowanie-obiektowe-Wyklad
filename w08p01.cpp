#include <iostream>

using namespace std;

class RGB
{
private:
    int R;
    int G;
    int B;

public:
    RGB(int r, int g, int b) : R(r), G(g), B(b) {}
    friend int jasnosc(RGB kolor);
};

int jasnosc(RGB kolor)
{
    int j = (kolor.R + kolor.G + kolor.B) / 3;
    return j;
}

int main()
{
    RGB kolor1(255,0,0);

    return 0;
}