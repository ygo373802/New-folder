#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;
int secl(int numbers[],int len)
{
    int l = INT_MIN,second = INT_MIN;
    for(int a = 0;a < len;a++)
    {
        if(l < numbers[a])
        {
        second = l;
        l = numbers[a];
        }
        if(l > numbers[a] && numbers[a] > second)
        second = numbers[a];
    }
    return second;
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10,15,12};
    int b = secl(a,12);
    cout << b;
    return 0;
}