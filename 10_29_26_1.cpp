#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
void remove(int a[],int& size)
{
    int slow = 0,fast = 0;
    for(;fast < size;++fast)
    {
        if(a[fast] >= 0)
        {
            a[slow] = a[fast];
            slow++;
        }
    }
    size = slow;
}
int main()
{
    int a[100000] = {1,2,-3,4,-5,-6,3,0,-7};
    int size = 9;
    remove(a,size);
    for(int n = 0;n < size;n++)
    {
        cout << a[n] << " ";
    }
    return 0;
}