#include <vector>
#include <string> 
#include <fstream>
#include <iostream>
using namespace std;
vector<vector<string>> duizhao(ifstream& in)
{
    vector<vector<string>> result;
    string str;
    while(in >> str)
    {
 vector<string> l;
        l.push_back(str);
        in >> str;
    l.push_back(str);
        in >> str;
        l.push_back(str);
    result.push_back(l);
}
return result;
}
string jieguo(const vector<vector<string>>& duizhao,string str)
{
    string result;
    for(int a = 0;a < duizhao.size();a++)
    {
        for(int b = 0;b < 3;b++)
        {
            if(duizhao[a][b] == str)
            {
                for(int c = 0;c < 3;c++)
                {
                    if(c != b)
                    result += duizhao[a][c] + " ";
                }
            }
        }
    }
    return result;
}
int main()
{
    ifstream in("input.txt");
    string l;
    cin >> l;
    string result = jieguo(duizhao(in),l);
    if(result == "")
    cout << "no found";
    else
    cout << result;
    return 0;
}