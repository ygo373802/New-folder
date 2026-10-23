#include<iostream>
#include <string>
using namespace std;
int gongyueshu(int a,int b)
{
    int c;
    while(b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int fenzi(string s)
{
    int wei = s.find("/");
    string fenzi = s.substr(0,wei);
    int fz = stoi(fenzi);
    return fz;
}
int fenmu(string s)
{
    int wei = s.find("/");
    string fenmu = s.substr(wei + 1);
    int fm = stoi(fenmu);
    return fm;
}
int main()
{
    string a,b;
    cin >> a >> b;
    int zia = fenzi(a),mua = fenmu(a),zib = fenzi(b),mub = fenmu(b);
    int mu = mua * mub,zi = zia * mub + zib * mua;
    int n = gongyueshu(mu,zi);
    cout << zi / n << "/" << mu / n;
    return 0;
}
