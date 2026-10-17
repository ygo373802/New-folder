#include<iostream>
using namespace std;
int main()
{
    int a,b,c = 0,sum1 = 0,sum2 = 0;
    long long  kahao;
    cin >> kahao;
    long long kahao1 = kahao / 10;
    while(kahao > 0)
    {
        a = kahao % 10;
        kahao = kahao / 10;
        sum1 = sum1 + a;
    }
    while(kahao1 > 0)
    {
        b = kahao1 % 10;
        if(b > 4)
        ++c;
        kahao1 = kahao1 / 100;
        sum2 = sum2 + b;
    }
    int zong = sum1 + sum2 + c;
    if(zong % 10 == 0)
    cout << "valid";
    else
    cout << "not valid";
    return 0;


}