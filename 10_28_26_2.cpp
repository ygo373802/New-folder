#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
vector<int> location(const vector<vector<int>>& chart,const int& find)
{
    int n = 0,m = 0;
    bool f = false;
    for(;n < chart.size() && !f;n++)
    {
        for(;m < chart[n].size();m++)
        {
           if(chart[n][m] == find)
           {
            f = true;
           break;
           }
        }
    }
    vector<int> c;
    if(f)
    {
    c = {m,n};
    return c;
    }
    else
    return c;

}