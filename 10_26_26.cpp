#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int ci;
    cin >> ci;
    int values[ci];
    for(int a = 0;a < ci;a++)
    {
        values[a] = rand() % 1000;
    }
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
    for(int a = 0;a < ci;a++)
    {
        cout << values[a] << endl;
    }
    return 0;
}