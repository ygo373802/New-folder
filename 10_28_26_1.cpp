#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
using namespace std;
void remove_min(int a[],int len)
{
    int min = a[0],pos = 0;
    for(int n = 1;n < len;n++)
    {
        if(min > a[n])
        {
        min = a[n];
        pos = n;
        }
    }
    for(int b = pos;b < len;b++)
    {
        a[b] = a[b + 1];
    }
}