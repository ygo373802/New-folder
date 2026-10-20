#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
void p(int a)
{
    if(a < 1)
    {
        return;
    }
    p(a - 1);
    for(int i = 0;i < a;i++)
    {
        cout << "*";
    }
    cout << endl;
}
int main()
{
    int a;
    cin >> a;
    p(a);
}