#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
vector<string> merge(vector<string> left,vector<string> right,vector<int> l,vector<int> r)
{
    vector<string> str;
    int zuo = 0,you = 0;
    while(zuo < left.size() && you < right.size())
    {
        if(l[zuo] <= r[you])
        {
            str.push_back(left[zuo]);
            ++zuo;
        }
        else if(l[zuo] > r[you])
        {
            str.push_back(right[you]);
            ++you;
        }
    }
    if(zuo < left.size())
    {
        for(int n = zuo;n < left.size();++n)
        {
            str.push_back(left[n]);
        }
    }
    else if(you < right.size())
    {
        for(int n = you;n < right.size();++n)
        {
            str.push_back(right[n]);
        }
    }
    return str;
}
vector<string> mergesort(vector<string> str,vector<int> num)
{
    if(str.size() <= 1)
    return str;
    int mid = str.size() / 2;
    vector<int> l,r;
    vector<string> left,right;
    for(int n = 0;n < mid;n++)
    {
        l.push_back(num[n]);
        left.push_back(str[n]);
    }
    for(int n = mid;n < str.size();n++)
    {
        r.push_back(num[n]);
        right.push_back(str[n]);
    }
    return merge(mergesort(left,l),mergesort(right,r),l,r);
}
void sor(vector<string>& a,int from,int to)
{
    vector<int> nums;
    for(int n = from;n <= to;n++)
    {
        int m = a[n].find_first_of("123456789");
        int nu = stoi(a[n].substr(m));
        nums.push_back(nu);
    }
    vector<string> b = mergesort(a,nums);
    for(int n = from;n <= to;n++)
    {
        a[n] = b[n - from];
    }
}
void paixu(vector<string>& a)
{
    sort(a.begin(),a.end());
    int slow = 0,fast = 0;
    while(fast < a.size())
    {
        while(a[slow] == a[fast])
        {
            fast++;
        }
        int chang = fast - slow;
        if(chang > 1)
        {
            sor(a,slow,fast);
        }
        slow = fast;
    }
}
int main()
{
    vector<string> a = {"abd1","abd2","abc1"};
    paixu(a);
    for(int n = 0;n < a.size();n++)
    {
        cout << a[n] << " ";
    }
    
}
