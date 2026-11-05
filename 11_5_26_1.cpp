#include <vector>
#include <iostream>
using namespace std;
int length(const vector<int>& a)
{
    int slow = 0,fast = 0,Length,longest = 0;
    while(fast < a.size())
    {
        while(fast < a.size() && a[fast] == a[slow])
        {
            fast++;
        }
        Length = fast - slow;
        slow = fast;
        if(longest < Length)
        longest = Length;
    }
    return longest;
}
int main()
{
    vector<int> a = {1,2,3,4,3,3,4,4,4,5,5,5,3,3,3,3};
    int b = length(a);
    cout << b;
}