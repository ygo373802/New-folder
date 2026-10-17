#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int x = 0,y = 0;
    
    for(int n = 1;n <= 100;++n)
    {
    int a = rand() % 2;
    int c = rand() % 2 + 1;
    int b = pow((-1),c);
    if(a == 0)
    x = x + b;
    else
    y = y + b;
    }
    int l = sqrt(pow(x,2) + pow(y,2));
    cout << "(" << x << "," << y << ")" << " " << l;
    return 0;

    
}