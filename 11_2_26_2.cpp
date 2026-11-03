#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    int n,row,col;
    cin >> n;
    if(n % 2 == 0)
    {
        cout << "please enter an odd number";
        return 1;
    }
    row = n - 1;
    col = n / 2;
    vector<vector<int>> shudu(n,vector<int>(n,0));
    for(int k = 1;k <= pow(n,2);++k)
    {
        if(shudu[row][col] != 0)
        {
            if(row == 0)
            row = n - 1;
            else
            row--;
            if(col == 0)
            col = n - 1;
            else
            col--;
            row--;
        }
        shudu[row][col] = k;
        row++;
        col++;
        if(row == n)
        row = 0;
        if(col == n)
        col = 0;
    }
    for(int a = 0;a < n;a++)
    {
        for(int b = 0;b < n;b++)
        {
            cout << setw(4) << shudu[a][b];
        }
        cout << endl;
    }
    return 0;
}