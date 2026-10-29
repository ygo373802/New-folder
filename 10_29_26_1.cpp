#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int size;
    cin >> size;
    double root[size];
    double num;
    for(int n = 0;n < size;n++)
    {
        cin >> num;
        root[n] = num;
    }
    vector<vector<double>> sqr;
    for(int n = 0;n < size;n++)
    {
        vector<double> a = {root[n],pow(root[n],2)};
        sqr.push_back(a);
    } 
    for(int n = 0;n < size;n++)
    {
        for(int m = 0;m < 2;m++)
        {
            cout << sqr[n][m] << " ";
        }
        cout << endl;
    }
}