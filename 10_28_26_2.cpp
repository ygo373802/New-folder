#include <iostream>
#include <vector>
using namespace std;
void append(vector<int>& a,const vector<int>& b)
{
    a.insert(a.end(),b.begin(),b.end());
}
int main()
{
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {6,7,8,9,10};
    append(a,b);
    for(int n : a)
    {
        cout << n << " ";
    }
    return 0;
}
