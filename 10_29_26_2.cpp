#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    srand(time(0));
    int a = 45;
    vector<int> paidui;
    vector<int> coppy;
    vector<int> jieju = {1,2,3,4,5,6,7,8,9};
    while(a > 0)
    {
        int b = rand() % a + 1;
        a = a - b;
        paidui.push_back(b);
    }
    do
    {
        int zhang = 0;
        vector<int>p;
        for(int n = 0;n < paidui.size();++n)
        {
            paidui[n]--;
            ++zhang;
        }
        for(int v = 0;v < paidui.size();v++)
            {
                if(paidui[v] > 0)
                {
                    p.push_back(paidui[v]);
                }
            }
            paidui = p;
    paidui.push_back(zhang);
    coppy = paidui;
    sort(coppy.begin(),coppy.end());
    }
    while(coppy != jieju);
    for(int n = 0;n < paidui.size();++n)
    {
        cout << paidui[n] << " ";
    }
    return 0;
}
