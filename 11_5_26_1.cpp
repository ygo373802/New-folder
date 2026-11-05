#include <vector>
#include <iostream>
#include <set>
using namespace std;
vector<int> sort(const vector<int>& a)
{
    vector<int> tem(256,0);
    for(int n = 0;n < a.size();++n)
    {
        tem[a[n + 128]]++;
    }
    vector<int> fan;
    for(int n = 0;n < tem.size();n++)
    {
        if(tem[n] > 0)
        {
            for(int m = 0;m < tem[n];m++)
            {
                fan.push_back(n - 128);
            }
        }
    }
    return fan;
}