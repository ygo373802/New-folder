#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int f1 = 1,f2 = 1,n,fn;
    cin >> n;
    fn = f1 + f2;
    cout << f1 << " " << f2 << " " << fn;
    for(int a = 0;a < n;++a)
    {
        f1 = f2;
        f2 = fn;
        fn = f1 + f2;
        cout << " " << fn;

    }
    
    return 0;
}