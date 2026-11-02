#include <iostream>
#include <vector>
using namespace std;
bool same(const vector<int>& a,const vector<int>& b)
{
    return a == b;
}
int main()
{
    vector<int> a = {1,2,3,4};
    vector<int> b = {1,2,3};
    if(same(a,b))
    cout << "they are the same";
    else
    cout << "they are different";
    return 0;
}