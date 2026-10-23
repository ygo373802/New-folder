#include<iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;
void bi(string& a,string& b)
{
    auto m = a.find("."),n = b.find(".");
    int shu1,shu2;
    if(m == string::npos)
    {
        shu1 = stoi(a);
    }
    else