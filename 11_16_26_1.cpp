#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
vector<string> word(const string& str)
{
    string s = "|" + str;
    vector<string> result;
    int slow = 0,fast = 1;
    while(fast < s.length())
    {
    while(fast < s.length() && s[fast] != '|')
    {
        fast++;
    }
    result.push_back(s.substr(slow + 1,fast - slow - 1));
    if(fast < s.length())
    {
    slow = fast;
    fast++;
    }
    }
    return result;
}
string sentence(const vector<string>& duizhao,const string& str)
{
    int slow = 0,fast = 0;
    string result = "";
    while(slow < str.length() && str[slow] != '|')
    {
        slow++;
    }
    result += str.substr(0,slow);
    while(fast < str.length() && slow < str.length())
    {
    fast = slow + 1;
    while(fast < str.length() && str[fast] != '|')
    {
        fast++;
    }
    int pos = stoi(str.substr(slow + 1,fast - slow - 1));
    result += duizhao[pos - 1];
    slow = fast + 1;
    while(slow < str.length() && str[slow] != '|')
    {
        slow++;
    }
    result += str.substr(fast + 1,slow - fast - 1);
    }
    return result;
}
int main()
{
    string line1,line2;
    ifstream in1("input.txt"),in2("output.txt");
    getline(in1,line1);
    vector<string> duizhao = word(line1);
    while(getline(in2,line2))
    {
        cout << sentence(duizhao,line2) << endl;
    }
    return 0;
}