#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   int max = 0,dangqian = 0;
   string w;
   cin >> w;
   char a = 'a';
   char l;
   int n = 0;
   while(a <= 'z')
   {
    while(n < w.length())
    {
        l = w[n];
        if(l == a)
        dangqian++;
        n++;   
    if(dangqian > max)
    max = dangqian;
    }
    n = 0;
    dangqian = 0;
    a++;
   }
   a = 'a';
   while(a <= 'z')
   {
    while(n < w.length())
    {
        l = w[n];
        if(l == a)
        dangqian++;
        n++;
    }   
    if(dangqian == max)
    cout << a;   
    n = 0;
    dangqian = 0;
    a++;
   }
    return 0;
}