#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    ifstream in("input.txt");
    if(!in)
    {
        cerr << "invalid name";
        return 1;
    }
    vector<string> lines;
    string line;
    while(getline(in,line))
    {
       if(line.size() > 0)
       {
        lines.push_back(line);
       }
    }
    ofstream out("input.txt");
    if(!out)
    {
        cerr << "invalid name";
        return 1;
    }
    for(string str : lines)
    {
        out << str << endl;
    }
}