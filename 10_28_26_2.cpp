#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
int count(const vector<string>& str)
{
    set<string> uni;
    for(int n = 0;n < str.size();n++)
    {
        uni.insert(str[n]);
    }
    int number = uni.size();
    return number;
}
int main()
{
    vector<string> a = {"a","a","a","b"};
    int n = count(a);
    cout << n;
    return 0;
}