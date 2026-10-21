#include <iostream>
#include <algorithm>
using namespace std;
bool allsame(const double& a,const double& b,const double& c)
{
    return (a == b && b == c) ? true:false;
}
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    bool same = allsame(a,b,c);
    if(same)
    cout << "same";
    else
    cout << "not the same";
    return 0;

}