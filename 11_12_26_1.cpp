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
    string line;
    while(getline(input,line))
    {
        lines.push_back(line);
    }
    input.close();
    ofstream output("output.txt");
    if(output.fail())
    return 1;
    for(int n = lines.size() - 1;n >= 0;n--)
    {
        output << lines[n] << endl;
    }
    output.close();
    return 0;
}