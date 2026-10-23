#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;
int bi(string& a,string& b)
{
    int da = 1;
    auto m = a.find("."),n = b.find(".");
    int shu1,shu2;
    if(m == string::npos)
    {
        shu1 = stoi(a);
        a = "";
    }
    else
    {
        shu1 = stoi(a.substr(0,m));
        a = a.substr(m + 1);
    }
    if(n == string::npos)
    {
        shu2 = stoi(b);
        b = "";
    }
    else
    {
        shu2 = stoi(b.substr(0,n));
        b = b.substr(n + 1);
    }
    if(shu1 < shu2)
    da = -1;
    if(shu1 == shu2)
    da = 0;
    return da;
}
int main()
{
    string a,b;
    cin >> a >> b;
    int m;
    do
    {
        if(a == "" && b != "")
        {
           m = -1;
           break;
        }
        if(b == "" && a != "")
        {
           m = 1;
           break;
        }
        if(a == "" && b == "")
        {
           m = 0;
           break;
        }
        m = bi(a,b);
    }
    while(m == 0);
    cout << m;
}