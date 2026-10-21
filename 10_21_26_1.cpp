#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
void jiao(int& a,int& b)
{
   int m = a;
   if(a < b)
   {
    a = b;
    b = m;
   }
}
int main()
{
    int a,b;
    cin >> a >> b;
    jiao(a,b);
    cout << a << " " << b;
    return 0;
}