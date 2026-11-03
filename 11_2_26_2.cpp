#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool shi(vector<vector<int>> a)
{
    vector<int> he;
    vector<bool> seen(17,false);
    for(vector<int> b : a)
    {
        int sum = 0;
        for(int c : b)
        {
            if(c <= 0 || c > 16 || seen[c])
            {
                return false;
            }
                seen[c] = true;
            
            sum = sum + c;
        }
        he.push_back(sum);
    }
    for(int n = 0;n < 4;++n)
    {
        int sum = 0;
        for(int m = 0;m < 4;++m)
        {
            sum = sum + a[m][n];
        }
        he.push_back(sum);
    }
    int dui1 = a[0][0] + a[1][1] + a[2][2] + a[3][3];
    he.push_back(dui1);
    int dui2 = a[0][3] + a[1][2] + a[2][1] + a[3][0];
    he.push_back(dui2);
    for(int n = 0;n < 9;n++)
    {
        if(he[n] != he[n + 1])
        return false;
    }
    return true;
}
int main()
{
    vector<vector<int>> shudu;
    for(int n = 0;n < 4;++n)
    {
        vector<int> row;
        int num;
        for(int m = 0;m < 4;++m)
        {
        cin >> num;
        row.push_back(num);
        }
        shudu.push_back(row);
    }
    
}