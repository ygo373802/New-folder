#include<iostream>
#include <string>
#include<iomanip>
using namespace std;
void chushi(string beichushu,string chushu)
{
    int chu,cha,yushu;
    int ci = beichushu.length() - chushu.length() + 1;
    int n = 0,k;
    int shuwei = chushu.length();
    string diyici = beichushu.substr(n,shuwei);
    int diyibei = stoi(diyici);
    chu = stoi(chushu);
    int shang = (diyibei / chu) * chu;
    cha = diyibei - shang;
    string x = to_string(shang);
    int X = x.length();
    cout << setw(shuwei + n) << shang << endl;
    cout  << setw(shuwei + n -1) << "-";
    for(int a = 0;a < X - 1;a++)
    {
        cout << "-";
    }
    cout << endl;
    int gewei = stoi(beichushu.substr(shuwei + n,1));
    yushu = cha * 10 + gewei;
    cout << setw(shuwei + n + 1) << yushu << endl;
    ++n;
    for(;n <= beichushu.length() - chushu.length();n++)
    {
        shang = yushu / chu * chu;
        cha = yushu - shang;
        cout << setw(shuwei + n) << shang << endl;
    cout << setw(shuwei + n - 1) << "-";
    x = to_string(shang);
    X = x.length();
    cout  << setw(shuwei + n -1) << "-";
    for(int a = 0;a < X - 1;a++)
    {
        cout << "-";
    }
    cout << endl;
    if(shuwei + n < beichushu.length())
    {
    gewei = stoi(beichushu.substr(shuwei + n,1));
    yushu = cha * 10 + gewei;
    cout << setw(shuwei + n + 1) << yushu << endl;
    }
    else
    {
        yushu = cha;
        cout << setw(shuwei + n) << yushu << endl;
    }
    }
}
main()
{
    string a,b;
    cin >> a >> b;
    int A = stoi(a),B = stoi(b);
    cout <<  a << " : " << b << " = " << A / B << " Reminder " << A % B << endl;
    chushi(a,b);
}