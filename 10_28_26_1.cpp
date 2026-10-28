#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;
int l(int a[],int len)
{
    for(int n = 0;n < len;n++)
    {
        for (int m = n + 1;m < len;m++)
        {
            if(a[n] == a[m])
            {
                for(int b = m;b < len - 1;b++)
                {
                    a[b] = a[b + 1];
                }
                len--;
                m--;
            }
        }
    }
    return len;
}
int main()
{
    int a[] = {1,4,9,16,9,7,4,9,11};
    int b = l(a,9);
    for(int n = 0;n < b;n++)
    {
        cout << a[n] << " ";
    }
    return 0;
}