#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    srand(time(0));
    vector<int> dian;
    for(int n = 0;n < 20;n++)
    {
        int m = rand() % 6 + 1;
        dian.push_back(m);
    }
    int left = 0;
    while(left < 20)
    {
        int right = left;
        while(right < 20 && dian[right] == dian[left])
        {
            ++right;
        }
        int count = right - left;
        if(count > 1)
        {
            cout << "(";
            for(int n = left;n < right;n++)
            {
                cout << dian[n] << " ";
            }
            cout << ")";
        }
        else
        {
            cout << dian[left] << " ";
        }
        left = right;
    }
}