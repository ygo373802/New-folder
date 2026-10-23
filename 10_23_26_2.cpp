#include<iostream>
#include <string>
using namespace std;
int shu(string s)
{
    int a;
    if(s == "I")
    a = 1;
    if(s == "V")
    a = 5;
    if(s == "X")
    a = 10;
    if(s == "L")
    a = 50;
    if(s == "C")
    a = 100;
    if(s == "D")
    a = 500;
    if(s == "M")
    a = 1000;
    return a;
}
int main()
{
    string a;
    cin >> a;
    int t = 0;
    while(a != "")
    {
    if(a.length() == 1){
    t = t + shu(a);
    cout << t;
    return 0;
    }
    string s = a.substr(0,1),h = a.substr(1,1);
    int first = shu(s),second = shu(h);
    if(first >= second)
    {
        t = first + t;
        a = a.substr(1);
    }
    else
    {
        t = t + second - first;
        a = a.substr(2);
    }
} 
cout << t;
}