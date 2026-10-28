#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <cmath>
using namespace std;
int zhengli(int a[],int len)
{
     sort(a,a + len);
     for(int n = 0;n < len - 1;)
     {
        if(a[n] == a[n + 1])
        {
            for(int b = n + 1;b < len - 1;b++)
            {
                a[b] = a[b + 1];
            }
            --len;
        }
        else
        n++;
     }
     return len;
}
bool re(int a[],int a_size,int b[],int b_size)
{
    int ac = zhengli(a,a_size);
    int bc = zhengli(b,b_size);
    if(ac != bc)
    return false;
    for(int n = 0;n < ac;n++)
    {
        if(a[n] != b[n])
        return false;
    }
    return true;
}
int main()
{
    int a[] = {1,4,9,16,9,7,4,9,11};
    int b[] = {11,7,9,4,16,1,16,16,16};
    bool s = re(a,9,b,9);
    if(s)
    cout << "same";
    else
    cout << "not";
    return 0;
}