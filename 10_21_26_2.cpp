#include<iostream>
#include<string>
using namespace std;
bool con(const string& str,const string& zhao)
{
    int chang = zhao.length();
    string s = str;
    if(s.length() >= chang)
    {
    if(s.substr(0,chang) == zhao)
    return true;
    else
    {
        s = s.substr(1);
        return con(s,zhao);
    }
}
else
return false;
}
int main()
{
    string a,b;
    cin >> a >> b;
    bool dui = con(a,b);
    if(dui)
    cout << "yes";
    else
    cout << "no";
    return 0;
}
