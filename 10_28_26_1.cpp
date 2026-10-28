#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;
int sum(int a[],int len)
{
    int s = 0;
    for(int n = 0;n < len;n++)
    {
        s = s + pow(-1,n) * a[n];
    }
    return s;
}
