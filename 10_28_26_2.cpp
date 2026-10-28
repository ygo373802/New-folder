#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
bool different(const vector<vector<int>>& a)
{
    vector<int> oneline;
    for(int n = 0;n < a.size();n++)
    {
        oneline.insert(oneline.end(),a[n].begin(),a[n].end());
    }
    set<int> buchong(oneline.begin(),oneline.end());
    if(oneline.size() == buchong.size())
    return true;
    return false;
}