#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool have(vector<int> a,int value)
{
    sort(a.begin(),a.end());
    int left = 0,right = a.size() - 1;
    while(left < right)
    {
        int sum = a[left] + a[right];
        if(sum == value)
        return true;
        else if(sum < value)
            left++;
        else
        right--;
    }
    return false;
}