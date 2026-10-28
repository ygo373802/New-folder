#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;
bool in(int a[],int len)
{
    for(int b = 0;b < len;b++)
    {
        for(int c = b + 1;c < len;c++)
        {
            if(a[b] == a[c])
            return true;
        }
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