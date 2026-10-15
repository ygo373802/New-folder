#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int a = 1;a <= n;a++)
    {
    int h = rand() % 24,m = rand() % 60;
    cout << h << " hour " << m << " minutes" << endl;
    }
    return 0;
}