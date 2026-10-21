#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
int shu(const string& str)
{
    int p = str.find_first_of("0123456789");
    string shu = str.substr(p);
    int a = stoi(shu);
    return a;
}
bool xiao(const int& a,const int& b)
{
    bool xiao = true;
    if(a >= b)
    xiao = false;
    return xiao;
}
int main()
{
    string wen1,wen2;
    cin >> wen1 >> wen2;
    bool x = xiao(shu(wen1),shu(wen2));
    if(x)
    cout << "true";
    else 
    cout << "false";
    return 0;
}