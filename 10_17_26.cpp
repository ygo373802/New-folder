#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
   string a;
   cin >> a;
   char l;
   int c = a.length();
   bool buchong = true;
   for(int b = 0;b < c;++b)
   {
    l = a[b];
    l = tolower(l);
    for(int d = 0;d < b;++d)
    {
        if(tolower(a[d]) == l)
        {
            buchong = false;
        }
    }
    if(buchong)
    cout <<l;
    buchong = true;

   }
    return 0;
}