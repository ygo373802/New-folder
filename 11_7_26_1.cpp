#include <vector>
#include <iostream>
using namespace std;
int med(vector<int>& shu,const int& from,const int& to,const int& k)
{
    int pivot = shu[from];
    int xiao = 0,deng = 0,da = 0;
    vector<int> x,de,big;
    for(int n = from;n < to;++n)
    {
        if(shu[n] < pivot)
        {
            ++xiao;
            x.push_back(shu[n]);
        }
        else if(shu[n] > pivot)
        {
            ++da;
            big.push_back(shu[n]);
        }
        else
        {
            deng++;
            de.push_back(shu[n]);
        }
    }
    int n1 = x.size(),n2 = de.size(),ind = from;
    for(int n : x)
    {
        shu[ind++] = n;
    }
    for(int n : de)
    {
        shu[ind++] = n;
    }
    for(int n : big)
    {
        shu[ind++] = n;
    }
    if(k < from + n1)
    {
        return med(shu,from,from + n1,k);
    }
    else if(k >= from + n1 + n2)
    {
        return med(shu,from + n1 + n2,to,k);
    }
    else
    return pivot;    
}
int main()
{
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    int from = 0,to = a.size(),k = from + (to - from) / 2;
    int b = med(a,from,to,k);
    cout << b;
    return 0;
}