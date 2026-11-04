#include <vector>
using namespace std;
bool find(const vector<int>& a,const int& target,int& pos)
{
    pos = a.size();
    int low = 0,high = a.size() - 1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(a[mid] == target)
        {
            pos = mid;
            return true;
        }
        else if(target < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}