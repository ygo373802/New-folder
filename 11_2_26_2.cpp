#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
bool win(vector<vector<string>> a)
{
    for(vector<string> b : a)
    {
        if(b[0] == b[1] && b[1] == b[2] && b[0] != " ")
        return true;
    }
    for(int n = 0;n < 3;++n)
    {
        if(a[0][n] == a[1][n] && a[1][n] == a[2][n] && a[0][n] != " ")
        return true;
    }
    if(a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[1][1] != " ")
    return true;
    if(a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] != " ")
    return true;
    return false;
}
int main()
{
    vector<vector<string>> qipan(3,vector<string>(3," "));
    int lun = 1;
    do
    {
        for(int n = 0;n < 3;++n)
        {
            for(int m = 0;m < 3;++m)
            {
                cout << qipan[n][m];
            }
            cout << endl;
        }
        int row,col;
        cin >> row >> col;
        while(row < 0 || row > 2 || col < 0 || col > 2)
        {
            cout << "invalid input, enter again" << endl;
            cin >> row >> col;
        }
        while(qipan[row][col] != " ")
        {
            cout << "occupied position!Enter again" << endl;
            cin >> row >> col;
        }
        string fuhao = (lun % 2 == 1) ? "O" : "X";
        qipan[row][col] = fuhao;
        lun++;
    }
    while(!win(qipan) && lun <= 9);
    cout << "game over!";
    return 0;
}