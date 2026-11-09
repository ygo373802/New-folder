#include <fstream>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool havesame (string line)
{
    string now = "",pre = "";
    for(char c : line)
    {
        if(isalpha(c))
        {
            now += c;
        }
        else
        {
            if(!now.empty())
            {
                if(now == pre)
                return true;
                pre = now;
                now = "";
            }
        }
    }
    if(now == pre && !now.empty())
    return true;
    return false;
}
int main()
{
    string filename;
    cin >> filename;
    ifstream ifile;
    ifile.open(filename);
    if(ifile.fail())
    return 1;
    string line;
    int row = 1;
    while(getline(ifile,line))
    {
        if(havesame(line))
        {
            cout << row << endl;
            cout << line;
        }
    }
    return 0;
}