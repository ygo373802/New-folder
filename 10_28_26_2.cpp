#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
bool identify(const vector<vector<int>>& td)
{
    if(td.size() == 0)
    return true;
    int a = td[0][0];
    for(int n = 0;n < td.size();n++)
    {
        for(int m = 0;m < td[n].size();m++)
        {
            if(td[n][m] != a)
            return false;
        }
    }
    return true;
}