#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
   int n;
   cin >> n;
    int a = 2;
    while(a <= n)
    {
       if(n % a == 0)
       {
        n = n / a;
        cout << a << endl;
        continue;
       }
       ++a;
    }
   
    
    return 0;
}