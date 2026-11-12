#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;
int main()
{
    string iname = "",oname = "",line,c = "";
    getline(cin,line);
    int fast = 0;
    while(line[fast] != ' ')
    {
        c += line[fast];
        ++fast;
    }
    if(c == "copyfile")
    {
       fast++;
       while(line[fast] != ' ')
       {
        iname += line[fast];
        fast++;
       }
       fast++;
       while(fast < line.size())
       {
        oname += line[fast];
        fast++;
       }
    } 
    else
    {
        cout << "wrong";
        return 1;
    } 
    ifstream in(iname);
    if(in.fail())
    {
        cerr << "invalid name";
        return 1;
    }
    ofstream out(oname);
    if(out.fail())
    {
        cerr << "invalid name";
        return 1;
    }
    string li;
    while(getline(in,li))
    {
        out << li << endl;
    }
    return 0;
}