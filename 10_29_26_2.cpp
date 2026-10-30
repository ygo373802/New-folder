#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int main()
{
    srand(time(0));
    vector<int> r;
    int shu = 20;
    for(int n = 0;n < shu;++n)
    {
        int m = rand() % 6 + 1;
        r.push_back(m);
    }
    int left = 0,zuo = 0,you = 0,chang = 0,current;
    while(left < shu)
    {
        int right = left;
        for(;right < shu && r[left] == r[right];)
        {
            ++right;
        }
        current = right - left + 1;
        if(current > chang)
        {
            zuo = left;
            you = right - 1;
            chang = current;
        }
        left = right;
    }
    for(int n = 0;n < shu;n++)
    {
        if(n == zuo)
        cout << "(";
        cout << r[n] << " ";
        if(n == you)
        cout << ")";
    }
    return 0;
}