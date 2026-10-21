#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
bool is(const string& str)
{
    string s = str;
    if(s.length() <= 1)
    return true;
    else if(s.length() == 2)
    {
        if(s.substr(0,1) == s.substr(s.length() - 1,1))
        return true;
        else
        return false;
    }
    else
    {
        if(s.substr(0,1) == s.substr(s.length() - 1,1))
        {
            s = s.substr(1,s.length() - 2);
            return true && is(s);
        }
        else
        return false;
    }
}
int main()
{
    string a;
    cin >> a;
    bool shi = is(a);
    if(shi)
    cout << "yes";
    else
    cout << "no";
    return 0;
}