#include <iostream>
#include<string>
using namespace std;

string mini(const string& s)
{
    if(s.length() < 1)
    return "";
    string min = s.substr(0,1);
    int a = 0;
    int b = 0;
    for(;a < s.length();a++)
    {
        string l = s.substr(a,1);
        if(l < min)
        {
        min = l;
        b = a;
        }
    }
    string xin = s.substr(0,b) + s.substr(b + 1);
    return (min + mini(xin));
}
int main()
{
    string a;
    cin >> a;
    string b = mini(a);
    cout << b;
    return 0;
}