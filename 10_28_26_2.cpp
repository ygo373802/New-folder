#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
void s(vector<vector<int>>& a,int col1,int col2)
{
    for(int n = 0;n < a.size();n++)
    {
        swap(a[n][col1],a[n][col2]);
    }
}