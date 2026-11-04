#include <iostream>
#include <vector>
#include <string>
#include <cfloat>
using namespace std;
void con(vector<double> pri,vector<string> name,int n)
{
    vector<string> a;
    vector<int> pos;
    int p;
    for(int m = 0;m < n;++m)
    {
        double da = 0;
        for(int b = 0;b < pri.size();++b)
        {
           if(pri[b] > da)
           {
              p = b;
              da = pri[b];
           }
        }
        pos.push_back(p);
        pri[p] = 0;
    }
    for(int m : pos)
    {
        cout << name[m] << endl;
    }

}