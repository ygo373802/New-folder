#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
vector<int> s(vector<int> left,vector<int> right)
{
    vector<int> jie;
    while(left.size() > 0 && right.size() > 0)
    {
        if(left[0] <= right[0])
        {
            jie.push_back(left[0]);
            left.erase(left.begin());
        }
        else if(left[0] > right[0])
        {
            jie.push_back(right[0]);
            right.erase(right.begin());
        }
    }
    if(left.size() > 0)
    {
        for(int n = 0;n < left.size();++n)
        {
            jie.push_back(left[n]);
        }
    }
    if(right.size() > 0)
    {
        for(int n = 0;n < right.size();++n)
        {
            jie.push_back(right[n]);
        }
    }
    return jie;
}
vector<int> sor(vector<int> a)
{
    if(a.size() <= 1)
    {
       return a;
    }
    vector<int> left;
    vector<int> right;
    int m = (a.size() - 1) / 2;
    for(int n = 0;n < m + 1;n++)
    {
        left.push_back(a[n]);
    }
    for(int n = m + 1;n < a.size();n++)
    {
        right.push_back(a[n]);
    }
    return s(sor(left),sor(right));
}
int main()
{
    vector<int> a = {1,3,5,7,2,4,6,8};
    vector<int> b = sor(a);
    for(int n = 0;n < b.size();n++)
    {
        cout << b[n] << " ";
    }
}