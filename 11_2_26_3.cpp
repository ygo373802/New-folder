#include <iostream>
#include <vector>
using namespace std;
int neighbors(vector<vector<int>> a,int chang,int kuan,int row,int col)
{
    int life = 0;
    for(int b = row - 1;b <= row + 1;++b)
    {
        if(b < 0 || b >= kuan)
        continue;
        for(int c = col - 1;c <= col + 1;++c)
        {
            if(c < 0 || c >= chang || (b == row && c == col))
            continue;
            if(a[b][c] == 1)
            life++;
        }
    }
    return life;
}
void next(vector<vector<int>> a,vector<vector<int>>& A,int row,int col,int chang,int kuan)
{
    int b = neighbors(a,chang,kuan,row,col);
    if(b >= 4 || b <= 1)
    A[row][col] = 0;
    if(b == 3)
    A[row][col] = 1;
}
vector<vector<int>> pattern(vector<vector<int>> a,int chang,int kuan)
{
    vector<vector<int>> jieguo;
    for(int n = 0;n < kuan;++n)
    {
        vector<int> hang;
        int left = 0,right = chang - 1;
        bool lfind = false;
        while(!lfind && left < chang)
        {
            if(a[n][left] == 1)
            {
                lfind = true;
                break;
            }
            ++left;
        }
        bool rfind = false;
        while(!rfind && right >= 0)
        {
            if(a[n][right] == 1)
            {
                rfind = true;
                break;
            }
            --right;
        }
        if(lfind && rfind)
        {
            for(int b = left;b <= right;++b)
            {
                hang.push_back(a[n][b]);
            }
            jieguo.push_back(hang);
        }
    }
    return jieguo;
}
bool iden(vector<vector<int>> a,vector<vector<int>> b,int chang,int kuan)
{
    return pattern(a,chang,kuan) == pattern(b,chang,kuan);
}
int main()
{
    int chang,kuan,gen;
    cin >> chang >> kuan >> gen;
    vector<vector<int>> cell(kuan,vector<int>(chang,0));
    int a,b;
    while(cin >> a >> b)
    {
        cell[a][b] = 1;
    }
    for(int n = 0;n < gen;n++)
    {
    vector<vector<int>> chushi = cell;
    for(int n = 0;n < kuan;++n)
    {
        for(int m = 0;m < chang;++m)
        {
            next(chushi,cell,n,m,chang,kuan);
        }
    }
    }
    for(vector<int> n : cell)
    {
        for(int m : n)
        {
            cout << m;
        }
        cout << endl;
    }
    return 0;
}
