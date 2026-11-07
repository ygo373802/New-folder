#include <vector>
#include <iostream>
using namespace std;
int med(int a,int b,int c)
{
    if((a <= b && b <= c) || (c <= b && b <= a))
    return b;
    else if((b <= a && a <= c) || (c <= a && a <= b))
    return a;
    else
    return c;
}
int quick(vector<int>& a,int from,int to)
{
    int s = to - from,pivot;
    if(s <= 1)
    return from;
    if(s <= 7)
    {
        pivot = a[(s) / 2 + from];
    }
    else if(s <= 40)
    {
        pivot = med(a[from],a[to - 1],a[from + s / 2]);
    }
    else
    {
        vector<int> v;
        for(int i = 0;i < 9;++i)
        {
            v.push_back(a[i * (s - 1) / 8 + from]);
        }
        pivot = med(med(v[1],v[0],v[2]),med(v[4],v[5],v[3]),med(v[6],v[7],v[8]));
    }
    int left = from - 1,right = to;
    while(true)
    {
        do
        {
            ++left;
        }
        while(left < to - 1 && a[left] < pivot);
        do
        {
            --right;
        }
        while(right > from && a[right] > pivot);
        if(left >= right)
        break;
        swap(a[left],a[right]);
    }
    return right;
}
void sort(vector<int>& a,int from,int to)
{
    if(from >= to - 1)
    return;
    int b = quick(a,from,to);
    sort(a,from,b);
    sort(a,b + 1,to);
}
int main()
{
    vector<int> a = {2,4,6,8,1,3,5,7};
    sort(a,0,a.size());
    for(int n = 0;n < a.size();++n)
    {
        cout << a[n] << " ";
    }
}