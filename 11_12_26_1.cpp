#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
vector<int> nums(ifstream& in)
{
    int lines = 0,c = 0,w = 0;
    string line;
    while(getline(in,line))
    {
       ++lines;
       stringstream ss(line);
       string words;
       while(ss >> words)
       {
        w++;
        c += words.length();
       }
    }
    vector<int> num = {lines,w,c};
    return num;
}
int main()
{
    while(true)
    {
    string name;
    cin >> name;
    ifstream input(name);
    if(input.fail())
    return 1;
    vector<int> a = nums(input);
    for(int n : a)
    {
        cout << n << " ";
    }
    input.close();
    }
    return 0;
}