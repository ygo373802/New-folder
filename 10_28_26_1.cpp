#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;
bool in(int a[],int len)
{
    bool inc = false;
    for(int n = 0;n < len - 1;n++)
    {
        if(a[n] == a[n + 1])
        inc = true;
        return inc;
    }
    return inc;
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