#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int zhong1 = 0,zhong2 = 0,dui = 0;
    for(int a = 1;a <= 1000;a++)
    {
    int jiang = rand() % 3;
    int pick = rand() % 3;
    int goat;
    do
    {
        goat = rand() % 3;
    }
    while(goat == pick || goat == jiang);
    if(pick == jiang )
    zhong2++;

        int n = pick;
        do
        {
            pick = rand() % 3;
        }
        while(pick == n || pick == goat);
        if(pick == jiang)
        zhong1++;
        
    }
    double c1 = zhong1 / 1000.0,c2 = zhong2 / 1000.0;
    cout << c1 << " " << c2;
    
    return 0;

    
}