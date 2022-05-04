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
    friend bool czyTakieSame(RGB &k1, RGB &k2);
};

bool czyTakieSame(RGB &k1, RGB &k2)
{
    if (k1.R == k2.R && k1.G == k2.G && k1.B == k2.B)
        return true;
    else
        return false;
}

int main()
{
    RGB kolor1(200, 100, 0), kolor2(200, 100, 0);
    if (czyTakieSame(kolor1, kolor2))
        cout << "TAK";
    else
        cout << "NIE";
    return 0;
}