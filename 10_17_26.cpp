#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    cout << "enter several numbers, enter e to stop" << endl;
    double x,sum = 0,geshu = 0,sumsq = 0;
    while(cin >> x)
    {
        sum = x + sum;
        sumsq = pow(x,2) + sumsq;
        ++geshu;
    }
    double av = sum / geshu;
    double s = sqrt(((sumsq - (pow(sum,2)) / geshu)) / (geshu - 1));
    cout << fixed << setprecision(4) << sum << " " << av << " " << s;


    return 0;


}