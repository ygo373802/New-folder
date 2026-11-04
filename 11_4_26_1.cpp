#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void S(vector<int> lefts,vector<int> rights,vector<string> leftn,vector<string> rightn,vector<int>& s,vector<string>& n)
{
    while(lefts.size() > 0 && rights.size() > 0)
    {
        if(lefts[0] < rights[0])
        {
            s.push_back(lefts[0]);
            lefts.erase(lefts.begin());
            n.push_back(leftn[0]);
            leftn.erase(leftn.begin());
        }
        else if(lefts[0] >= rights[0])
        {
            s.push_back(rights[0]);
            rights.erase(rights.begin());
            n.push_back(rightn[0]);
            rightn.erase(rightn.begin());
        }
    }
    if(lefts.size() > 0)
    {
        for(int n = 0;n < lefts.size();++n)
        {
            s.push_back(lefts[n]);
        }
        for(int m = 0;m < leftn.size();++m)
        {
            n.push_back(leftn[m]);
        }
    }
    if(rights.size() > 0)
    {
        for(int n = 0;n < rights.size();++n)
        {
            s.push_back(rights[n]);
        }
        for(int m = 0;m < rightn.size();++m)
        {
            n.push_back(rightn[m]);
        }
    }
}
void sor(vector<int> s,vector<string> name,vector<int>& sala,vector<string>& N)
{
    if(s.size() <= 1)
    {
        sala.push_back(s[0]);
        N.push_back(name[0]);
        return;
    }
    vector<int> lefts;
    vector<int> rights;
    vector<string> leftn;
    vector<string> rightn;
    vector<int> linshisl,linshisr;
    vector<string> linshinl,linshinr;
    int m = (s.size() - 1) / 2;
    for(int n = 0;n < m + 1;n++)
    {
        lefts.push_back(s[n]);
        leftn.push_back(name[n]);
    }
    for(int n = m + 1;n < s.size();n++)
    {
        rights.push_back(s[n]);
        rightn.push_back(name[n]);
    }
    sor(lefts,leftn,linshisl,linshinl);
    sor(rights,rightn,linshisr,linshinr);
    S(linshisl,linshisr,linshinl,linshinr,sala,N);
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
    vector<int> sala;
    vector<string> c;
    sor(salary,name,sala,c);
    for(int a = 0;a < c.size();a++)
    {
        cout << c[a] << " ";
    }
    return 0;
}