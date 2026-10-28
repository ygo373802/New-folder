#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
double aver(vector<vector<int>>ju,int row,int col,int shurow,int shucol)
{
    double count = 0;
    double sum = 0;
    for(int a = shurow - 2;a <= shurow;a++)
    {
        for(int b = shucol - 2;b <= shucol;b++)
        {
            if(0 <= a && a <= row - 1 && 0 <= b && b <= col - 1 && (a != shurow - 1 || b != shucol - 1))
            {
                sum = sum + ju[a][b];
                count++;
            }
        }
    }
    double av = sum / count;
    return av;
}
int main()
{
    vector<vector<int>> ju;
    int row,col;
    cout << "create your recentage,please input how many rows and colmuns you want: ";
    cin >> row >> col;
    for(int n = 0;n < row;n++)
    {
        vector<int> a;
        for(int m = 0;m < col;m++)
        {
            int b = rand() % 10;
            a.push_back(b);        
        }
        ju.push_back(a);
    }
    for(int num = 0;num < row;num++)
    {
        for (int mun = 0;mun < col;mun++)
        {
            cout << ju[num][mun] << " ";
        }
        cout << endl;
    }
    int srow,scol;
    cout << "give me a location in your recentage and I will give you the average number of its neighbors: ";
    cin >> srow >> scol;
    double ave = aver(ju,row,col,srow,scol);
    cout << ave;
    return 0;
}