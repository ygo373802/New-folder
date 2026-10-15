#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    int h,w;
    cin >> h >> w;
    for(int a = 1;a <= w * h;a++)
    {
        cout << "*";
        if(a % w == 0)
        cout << endl;
    }
    return 0;
}