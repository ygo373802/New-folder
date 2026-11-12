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
    bool begin = false;
    int slow = 0,fast = 0;
    while(getline(in,line))
    {
        if(line.size() > 0)
        begin = true;
        if(!begin)
        continue;
        lines.push_back(line);
        fast++;
        if(line.size() > 0)
        {
            slow = fast;
        }
    }
    in.close();
    ofstream out("input.txt");
    if(!out)
    {
        cerr << "invalid name";
        return 1;
    }
    for(int n = 0;n < slow;n++)
    {
        out << lines[n] << endl;
    }
}