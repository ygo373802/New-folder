#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ifstream input("input.txt");
    if(input.fail())
    return 1;
    vector<string> lines;
    string line;
    while(getline(input,line))
    {
        lines.push_back(line);
    }
    input.close();
    ofstream output("output.txt");
    if(output.fail())
    return 1;
    reverse(lines.begin(),lines.end());
    for(string l : lines)
    {
        output << l << endl;
    }
    output.close();
    return 0;
}