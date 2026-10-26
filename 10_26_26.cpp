#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int ci,xiwang;
    cin >> ci >> xiwang;
    int values[ci];
    for(int a = 0;a < ci;a++)
    {
        values[a] = rand() % 100;
    }
    int shou = 0,wei = ci,t = 0;
    int bufen = ci / 2;
    bool found = false;
    for(int a = 0;a < ci;a++)
    {   
        int b = a + 1,p = a;
        int s = values[a],tem;
        for(;b < ci;b++)
        {
            if(values[b] < s)
            {
               p = b;
               s = values[b];
            }
        }
        tem = values[a];
        values[a] = s;
        values[p] = tem;
    }
    while(bufen != t)
    {
        if(values[bufen] < xiwang)
        {
           shou = bufen + 1;
        }
        else if(values[bufen] > xiwang)
        {
            wei = bufen;
        }
        else if(values[bufen] == xiwang)
        {
            found = true;
            break;
        }
        t = bufen;
        bufen = (shou + wei) / 2;
    }
    if(found)
    cout << "find" << endl;
    else
    cout << "no" << endl;
    for(int a = 0;a < ci;a++)
    {
        cout << values[a] << endl;
    }
    return 0;
}