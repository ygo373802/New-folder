#include <iostream>
#include <algorithm>
using namespace std;
double s(const double& a,const double& b,const double& c)
{
    double jie = (a + b + c) / 3;
    return jie;
}
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double xiao = s(a,b,c);
    cout << xiao;
    return 0;
}