#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int a = 1; pow(2,a) < n;a++)
    {
     cout << pow(2,a) << " ";

    }
    return 0;
}