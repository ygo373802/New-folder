#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
bool v(char l)
{
    bool v = false;
    l = tolower(l);
    if(l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' )
    v = true;
    return v;
}
int count(string str)
{
    int c = 0;
    for(int a = 0;a < str.length();a++)
    {
        char l = str[a];
        bool is_v = v(l);
        if(is_v)
        ++c;
    }
    return c;
}
int main()
{
    string a;
    cin >> a;
    int n = count(a);
    cout << n;
    return 0;
}