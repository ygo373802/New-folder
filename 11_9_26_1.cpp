#include <fstream>
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int num(const string& str)
{
    string r = "";
    for(char l : str)
    {
        if(isdigit(l))
        {
            r += l;
        }
    }
    int result = stoi(r);
    return result;
}
string peera(const string& str)
{
    string result = "";
    for(char letter : str)
    {
        if(isalpha(letter))
        {
            result += letter;
        }
    }
    return result;
}
void paixu(vector<string>& a)
{
    stable_sort(a.begin(),a.end(),[](const string& s1,const string& s2)
    {
        string a1 = peera(s1),a2 = peera(s2);
        if(a1 != a2)
        return a1 < a2;
        else
        return num(s1) < num(s2);
    });
}
int main()
{
    vector<string> a = {"abd12","abd2","abc1"};
    paixu(a);
    for(int n = 0;n < a.size();++n)
    {
        cout << a[n] << " ";
    }
}
