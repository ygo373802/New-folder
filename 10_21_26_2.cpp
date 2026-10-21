#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int digit(const int& n)
{
    int m = abs(n),wei = 1;
    if(m < 10)
    return wei;
    else
    {
        m = m / 10;
        return 1 + digit(m);
    }
}
int main()
{
    int a;
    cin >> a;
    int b = digit(a);
    cout << b;
    return 0;
}