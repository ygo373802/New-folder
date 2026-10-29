#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
int length(int a[],int size)
{
    int slow = 0,fast = 0,big = 0;
    for(;fast < size;++fast)
    { 
        while(a[slow] != a[fast] && slow <= fast)
        {
            slow++;
        }
        if(fast - slow + 1 > big)
        big = fast - slow + 1;
    }
    return big;
}
int main()
{
    int a[] = {1,2,2,2,3,4,5,5,5,5,6,2,2};
    int size = 13;
    int b = length(a,size);
    cout << b;
    return 0;
}