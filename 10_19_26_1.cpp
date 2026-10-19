#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
string r (string s)
{
    int a = rand() % s.length();
    string o = s.substr(a,1);
    return o;
}
int main()
{
    int n;
    cin >> n;
    int b = rand() % n;
    for(int a = 0;a < b;a++)
    {
        string shu = r("abcdefghijklmnopqrstuvwxyz");
        cout << shu;
    }
    cout << r("!@#$%&*^");
    for(int a = b + 1;a < n;a++)
    {
         string shu = r("abcdefghijklmnopqrstuvwxyz");
        cout << shu;
    }
    return 0;
}
