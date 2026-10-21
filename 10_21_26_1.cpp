#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int digit(int a)
{
    int n = 0;
    if(a == 0)
    n = 1;
    else{
    a = abs(a);
    while(a > 0)
    {
        a = a / 10;
        n++;
    }
    }
    return n;
}
int first(int a)
{
    int n = digit(a);
    int f = a / pow(10,(n - 1));
    return f;
}
int last(int a)
{
    return (a % 10);
}
int main()
{
    int a;
    cin >> a;
    int d = digit(a),f = first(a),l = last(a);
    cout << d << " " << f << " " << l;
    return 0;
}