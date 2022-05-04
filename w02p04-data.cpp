#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t czas_systemowy = time(NULL);
    tm * czas_lokalny = localtime(&czas_systemowy);
    cout << czas_lokalny->tm_year + 1900 << endl
         << czas_lokalny->tm_mon + 1 << endl
         << czas_lokalny->tm_mday << endl
         << czas_lokalny->tm_hour << endl
         << czas_lokalny->tm_min << endl
         << czas_lokalny->tm_sec << endl;
         return 0;
}