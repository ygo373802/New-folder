#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<vector<string>> biao;
    int max = 20,col = 0;
    double num;
    vector<double> shu;
    while(cin >> num)
    {
        ++col;
        shu.push_back(num);
    }
    for(int n = 0;n < max;++n)
    {
        vector<string> a;
        for(int m = 0;m < col;++m)
        {
            a.push_back(" ");
        }
        biao.push_back(a);
    }
    double da = shu[0];
    for(int n = 1;n < col;++n)
    {
        if(shu[n] > da)
        da = shu[n];
    }
    for(int n = 0;n < col;++n)
    {
        double a = shu[n];
        int changdu = a / da * max;
        for(int x = max - 1;x >= max - changdu;--x)
        {
            biao[x][n] = "*";
        }
    }
    for(int n = 0;n < max;++n)
    {
        for(int m = 0;m < col;++m)
        {
            cout << biao[n][m];
        }
        cout << endl;
    }
    return 0;
}