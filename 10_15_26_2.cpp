#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << "Celsius | Fahrenheit" << endl;
    cout << "--------+-----------" << endl;
    int c = 0,f;
    for(;c <= 100;c = c + 10)
    {
        f = c * 1.8 + 32;
        cout << setw(7) << c << " |" << setw(11) << f << endl;
    }
    return 0;
}