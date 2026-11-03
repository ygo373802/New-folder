#include <iostream>
#include <vector>
using namespace std;
int posi(vector<int>& a,int low,int high)
{
    int left = low - 1,right = high + 1;
    int p = a[low];
    while(true)
    {
        do
        {
            ++left;
        }
        while(a[left] < p);
        do
        {
            --right;
        }
        while(a[right] > p);
        if(left >= right)
        return right;
        swap(a[left],a[right]);
    }
}
void paixu(vector<int>& a,int low,int high)
{
    if(low < high)
    {
        int m = posi(a,low,high);
        paixu(a,low,m);
        paixu(a,m + 1,high);
    }
}