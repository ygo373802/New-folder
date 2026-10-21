#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int count(string str)
{
    if(str != "")
    {
    int a = 0;
    string qian = " ";
    for(int n = 0;n < str.length();n++)
    {
        string l = str.substr(n,1);
        if(l != " " && qian == " ")
        ++a;
        qian = l;
    }
    return a;
    }
    else
    return 0;
}
int main()
{
    string a;
    getline(cin,a);
    int b = count(a);
    cout << b;
    return 0;
}