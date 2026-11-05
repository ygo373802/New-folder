#include <vector>
#include <iostream>
#include <set>
using namespace std;
int search(const vector<int>& a,int target)
{
    for(int n = 0;n < a.size();n++)
    {
        if(a[n] == target)
        {
            return n;
        }
    }
    return -1;
}
int binarysearch(const vector<int>& a,int target)
{
    int low = 0,high = a.size() - 1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(a[mid] == target)
        {
            return mid;
        }
        else if(a[mid] < target)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    return -1;
}