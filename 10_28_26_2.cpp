#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> merge(vector<int> a,vector<int> b)
{
    vector<int> c;
    int small = min(a.size(),b.size());
    int duan = 0;
    if(small == b.size())
    duan = 1;
    for(int n = 0;n < small;n++)
    {
        c.push_back(a[n]);
        c.push_back(b[n]);
    }
    if(duan == 0)
    {
        for(int m = small;m < b.size();m++)
        {
            c.push_back(b[m]);
        }
    }
    else if(duan == 1)
    {
        for(int m = small + 1;m < a.size();m++)
        {
            c.push_back(a[m]);
        }
    }
    return c;
    
    
}
int main()
{
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {6,7,8,9,10,11,12};
    vector<int> c = merge(a,b);
    for(int n : c)
    {
        cout << n << " ";
    }
    return 0;
}
