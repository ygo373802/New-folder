#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    for(int n = 1;n <= 9;++n)
    {
        for(int m = 1;m <= n;++m)
        {
            if((m == 3 && n == 3) || (m == 3 && n == 4))
            cout << " ";
            cout << n << " * " << m << " = " << m * n << "  ";
        }
        cout << endl;
    }
    return 0;
}