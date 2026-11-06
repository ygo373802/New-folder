#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    for(int a = 1;a <= 9;++a)
    {
        for(int b = 1;b <= a;++b)
        {
            if((b == 3 && a == 3) || (b == 3 && a == 4))
            cout << " ";
            cout << fixed << setw(3) << b << " * " << a << " = " << b * a << " ";
        }
        cout << endl;
    }
}