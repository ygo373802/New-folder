#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void chu(vector<int>& a)
{
    for(int n = 0;n < a.size() - 1;++n)
    {
        a[n] = a[n + 1];
    }
    a.pop_back();
}
vector<int> paixu(vector<int> a,vector<int> b)
{
    vector<int> lie;
    int cishu = a.size() + b.size();
    for(int n = 0;n < cishu && (a.size() != 0) && (b.size() != 0);++n)
    {
        if(a[0] <= b[0])
        {
            lie.push_back(a[0]);
            chu(a);
        }
        else
        {
            lie.push_back(b[0]);
            chu(b);
        }
    }
    if(a.size() != 0)
    {
        for(int n = 0;n < a.size();++n)
        {
            lie.push_back(a[n]);
        }
    }
    else
    {
        for(int n = 0;n < b.size();++n)
        {
            lie.push_back(b[n]);
        }
    }
    return lie;
}
vector<int> shiyan(vector<int> a)
{
    if(a.size() <= 1)
    return a;
    vector<int> qian;
    vector<int> hou;
    vector<int> lie;
    int m = a.size() / 2;
    for(int n = 0;n < m;++n)
    {
        qian.push_back(a[n]);
    }
    for(int n = m;n < a.size();++n)
    {
        hou.push_back(a[n]);
    }
        return paixu(shiyan(qian),shiyan(hou));
}
int main()
{
    vector<int> a = {1,3,5,7,2,4,6};
    vector<int> c = shiyan(a);
    for(int n = 0;n < c.size();++n)
    {
        cout << c[n] << " ";
    }
    return 0;
}