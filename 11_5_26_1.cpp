#include <vector>
#include <iostream>
#include <set>
using namespace std;
vector<int> remove(const vector<int>& a)
{
    set<int> b;
    for(int n = 0;n < a.size();++n)
    {
        b.insert(a[n]);
    }
    vector<int> c;
    for(int n = 0;n < b.size();++n)
    {
        c.push_back(b(n));
    }
    return b;
}
