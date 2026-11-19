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
