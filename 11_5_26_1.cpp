#include <vector>
#include <iostream>
#include <set>
using namespace std;
vector<int> merge(const vector<int>& a,const vector<int>& b)
{
    int left = 0,right = 0;
    vector<int> jie;
    while(left < a.size() && right < b.size())
    {
        if(a[left] <= b[right])
        {
            jie.push_back(a[left]);
            left++;
        }
        else if(a[left] > b[right])
        {
            jie.push_back(b[right]);
            right++;
        }
    }
    if(left < a.size())
    {
        for(int n = left;n < a.size();n++)
        {
            jie.push_back(a[n]);
        }
    }
    if(right < b.size())
    {
        for(int n = right;n < b.size();n++)
        {
            jie.push_back(b[n]);
        }
    }
    return jie;
}
vector<int> mergesort(const vector<int>& a)
{
    if(a.size() <= 1)
    {
        return a;
    }
    int low = 0,high = a.size();
    int mid = low + (high - low) / 2;
    vector<int> left(a.begin(),a.begin() + mid);
    vector<int> right(a.begin() + mid,a.end());
    return merge(mergesort(left),mergesort(right));
}
int main()
{
    vector<int> a = {};
    vector<int> b = mergesort(a);
    for(int n = 0;n < b.size();n++)
    {
        cout << b[n] << " ";
    }
    return 0;
}