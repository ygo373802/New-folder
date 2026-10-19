#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
void wenzi(double a)
{
    int b = a;
    cout << b << " dollars";
    double c = 100 * (a - b);
    cout << " " << c << " cents";
}
int main()
{
    double money;
    cin >> money;
    cout << money << endl;
    wenzi(money);
    return 0;
}
