#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
   string a;
   int dancishu = 0,sum = 0,jushu = 0,pingjun;
   while(cin >> a)
   {
    dancishu++;
    if(a.substr(a.length() - 1,1) == ".")
    {
        ++jushu;
        sum = sum + dancishu;
        dancishu = 0;
    }
    

   }
   pingjun = sum / jushu;
    cout << pingjun;
    return 0;
}