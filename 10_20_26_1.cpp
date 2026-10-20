#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int sum(int a)
{
    int he = 0;
    if(a < 10)
    return a;
    he = a % 10 + sum(a / 10);
    return he;
}
int main()
{
    int a;
    cin >> a;
    int b = sum(a);
    cout << b;
    return 0;
}