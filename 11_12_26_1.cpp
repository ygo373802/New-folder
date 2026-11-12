#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    ifstream input("input.txt");
    if(input.fail())
    return 1;
    vector<string> lines;
    string str;
    while(getline(input,str))
    {
        string line = "";
        for(int n = str.length() - 1;n >= 0;--n)
        { 
            line += str[n];
        }
        lines.push_back(line);
    }
    input.close();
    ofstream output("input.txt");
    if(output.fail())
    return 1;
    for(string l : lines)
    {
        output << l << endl;
    }
    output.close();
    return 0;
}