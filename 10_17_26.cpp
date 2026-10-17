#include<iostream>
#include<cmath>
#include<iomanip>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int zongshu = rand() % 91 + 10;
    int a,b;
    int smart_or_not = rand() % 2;
    int first = rand() % 2;
    cout << zongshu << " remain" << endl;
    if(first == 0)
        {
        cout << "you first: ";
        cin >> a;
        zongshu = zongshu - a;
        if(zongshu == 1)
        {
        cout << "you win" << endl;
        return 0;
        }
        else
        cout << zongshu << " remain" << endl;
        }
    else
    {
        cout << "the machine first" << endl;
    }
    if(smart_or_not == 0)
    {
        while(zongshu > 1)
        {
            b = rand() % (zongshu / 2) + 1;
            zongshu = zongshu - b;
            cout << zongshu << " remain" << endl;
            if(zongshu == 1)
            {
            cout << "you lose";
            return 0;
            }
            cin >> a;
            zongshu = zongshu - a;
            cout << zongshu << " remain" << endl;
            if(zongshu == 1)
            {
                cout << "you win";
                return 0;
            }
        }
    }
    else if(smart_or_not == 1)
    {
        while(zongshu > 1)
        {
            for(int n = 0;pow(2,n) <= zongshu;n++)
            {
                b = zongshu - pow(2,n) + 1;
            }
            if(b > zongshu / 2)
            b = rand() % (zongshu / 2) + 1;
            zongshu = zongshu - b;
            cout << zongshu << " remain" << endl;
            if(zongshu == 1)
            {
            cout << "you lose";
            return 0;
            }
            cin >> a;
            zongshu = zongshu - a;
            cout << zongshu << " remain" << endl;
            if(zongshu == 1)
            {
                cout << "you win";
                return 0;
            }
        }
    }  
}