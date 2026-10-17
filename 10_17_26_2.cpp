#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int money = 0;
    for(int m = 1;m <= 1000000;m++)
    {
    for(int n = 1;n <= 24;n++)
    {
    int a1 = rand() % 6 + 1,a2 = rand() % 6 + 1;
    if(a1 == 6 && a2 == 6)
    {
    money = money + 2;
    break;
    }
    }
    money = money - 1;
    }
    cout << money;


    return 0;

    
}