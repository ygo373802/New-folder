#include<iostream>
#include<cmath>
using namespace std;
double volm (double l,double h)
{
    double V = pow(l,2) * h / 3;
    return V;
}
int main()
{
    double l,h;
    cin >> l >> h;
    double v = volm(l,h);
    cout << v;
    return 0;
}