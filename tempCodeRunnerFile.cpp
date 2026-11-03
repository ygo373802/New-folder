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
            if(c < 0 || c >= chang)
            continue;
            if(a[b][c] == 1)
            life++;
        }
    }
    return life;
}
int main()
{
    vector<vector<int>> a(3,vector<int>(3,1));
    a[1][1] = 0;
    int b = neighbors(a,3,3,1,1);
    cout << b;
    return 0;

}