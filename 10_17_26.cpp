#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
   int n = 2,shuru;
   cin >> shuru;
   while(n <= shuru)
   {
   bool zhi = true;
    int a = 2;
    while(a < n)
    {
       if(n % a == 0)
       {
        zhi = false;
        break;
       }
       ++a;
    }
    if(zhi)
    cout << n << endl;
    ++n;
}
    return 0;
}