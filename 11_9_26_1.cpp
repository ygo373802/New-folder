#include <fstream>
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;
bool havesame (const string& line)
{
    stringstream ss(line);
    string now,pre = "";
    while(ss >> now)
    {
        if(now == pre)
        {
            return true;
        }
        pre = now;
    }
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
        row++;
    }
    return 0;
}