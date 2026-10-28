#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;
    for(int a = 0;a < 20;a++)
    {
        int b = rand() % 100;
        nums.push_back(b);
        cout << b << " ";
    }
    cout << endl;
    sort(nums.begin(),nums.end());
    for(int a : nums)
    {
        cout << a << " ";
    }
    return 0;

}