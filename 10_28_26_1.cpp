#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
using namespace std;
bool in(int a[],int len)
{
    sort(a,a + len);
    for(int n = 0;n < len - 1;n++)
    {
       if(a[n] == a[n + 1])
       return true;
    }
    return false;
    
}
int main()
{
    int a[] = {1,3,23,534,12,4352,5423};
    bool inc = in(a,7);
    if(inc)
    cout << "increasing";
    else
    cout << "not";
    return 0;
}