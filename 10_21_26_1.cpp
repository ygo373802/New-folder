#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
string m(string str)
{
    int a = str.length();
    string middle;
    if(a % 2 == 1)
    {
        middle = str.substr(a / 2,1);
    }
    else
    middle = str.substr(a / 2 - 1,2);
    return middle;
}
int main()
{
    string a;
    cin >> a;
    string b = m(a);
    cout << b;
    return 0;
}