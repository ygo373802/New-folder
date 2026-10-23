#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;
string reverse(const string& str)
{
    if(str.length() < 4)
    return str;
    string shou = str.substr(0,1),wei = str.substr(str.length()-1),zhong = str.substr(1,str.length()-2);
    int a,b;
    do
    {
    a = rand() % (zhong.length());
    b = rand() % (zhong.length());
    }
    while(a == b);
    swap(zhong[a],zhong[b]);
    return shou + zhong + wei;
}
int main()
{
    string a;
    while(cin >> a)
    {
    string b = reverse(a);
    cout << b << " ";
    }
    return 0;

}