#include <iostream>
#include <vector>
using namespace std;
int p(vector<int>& a,int l,int h)
{
    int P = a[l];
    int left = l - 1,right = h + 1;
    while(true)
    {
        do
        {
            left++;
        }
        while(a[left] < P);
        do
        {
            right--;
        }
        while(a[right] > P);
        if(left >= right)
        return right;
        swap(a[left],a[right]);
    }
}