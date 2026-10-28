#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
vector<int> merge(vector<int> a,vector<int> b)
{
    a.insert(a.end(),b.begin(),b.end());
    vector<int> c = a;
    sort(c.begin(),c.end());
    return c;
}
int main()
{
    vector<int> a = {1,2,3,4,5,11,12};
    vector<int> b = {6,7,8,9,10};
    vector<int> c = merge(a,b);
    for(int n : c)
    {
        cout << n << " ";
    }
    return 0;
}
