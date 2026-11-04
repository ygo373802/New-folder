#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
vector<int> s(vector<int> left,vector<int> right)
{
    vector<int> jie;
    while(left.size() > 0 && right.size() > 0)
    {
        if(left[0] < right[0])
        {
            jie.push_back(left[0]);
            left.erase(left.begin());
        }
        else if(left[0] >= right[0])
        {
            jie.push_back(right[0]);
            right.erase(right.begin());
        }
    }
    if(left.size() > 0)
    {
        for(int n = 0;n < left.size();++n)
        {
            jie.push_back(left[n]);
        }
    }
    if(right.size() > 0)
    {
        for(int n = 0;n < right.size();++n)
        {
            jie.push_back(right[n]);
        }
    }
    return jie;
}
vector<int> sor(vector<int> a)
{
    if(a.size() <= 1)
    {
       return a;
    }
    vector<int> left;
    vector<int> right;
    int m = (a.size() - 1) / 2;
    for(int n = 0;n < m + 1;n++)
    {
        left.push_back(a[n]);
    }
    for(int n = m + 1;n < a.size();n++)
    {
        right.push_back(a[n]);
    }
    return s(sor(left),sor(right));
}
vector<string> duiying(vector<int> a,vector<string> name)
{
    vector<int> hou = sor(a);
    vector<int> pos;
    for(int n = 0;n < a.size();n++)
    {
      int cha;
      for(int m = 0;m < hou.size();m++)
        {
            if(a[n] == hou[m])
            {
                cha = m - n;
                pos.push_back(cha);
                hou[m] = -1;
                break;
            }
        }
    }
    vector<string> jie(name.size());
    for(int n = 0;n < pos.size();n++)
    {
        jie[n + pos[n]] = name[n];
    }
    return jie;
}
int main()
{
    vector<string> name;
    vector<int> salary;
    int n,number;
    string m;
    cin >> number;
    for(int a = 0;a < number;a++)
    {
        cin >> m >> n;
        name.push_back(m);
        salary.push_back(n);
    } 
    vector<string> c = duiying(salary,name);
    for(int a = 0;a < c.size();a++)
    {
        cout << c[a] << " ";
    }
    return 0;
}