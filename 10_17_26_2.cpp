#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
    double s = 0,v = 100,t = 0.01,g = 9.81,s2 = 0;
    do
    {
    double vchu = v;
    for(int a = 1;a <= 100;a++)
    {
        s = 0.01 * v + s;
        v = v - 0.01 * g;
    }
    s2 = vchu - 0.5 * g;
    cout << setw(8) << s << " " << setw(8) << s2 << endl;
    }
    while(s >= 0 && s2 >= 0);
    return 0;

    
}