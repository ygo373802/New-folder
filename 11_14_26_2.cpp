#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
vector<string> ntw1(const string& st)
{
    string str = "|" + st;
    vector<string> result;
    string word;
    int slow = 0,fast = 1;
    while(fast < str.length())
    {
    while(fast < str.length() && str[fast] != '|')
    {
        ++fast;
    }
    if(fast >= str.length())
    break;
    word = str.substr(slow + 1,fast - slow - 1);
    result.push_back(word);
    slow = fast;
    fast++;
    }
    result.push_back(str.substr(slow + 1));
    return result;
}
string ntw2(const string& str,const vector<string>& N)
{
    string result = "";
    int slow = 0,fast = 0;
    while(slow < str.length() && str[slow] != '|')
    {
        slow++;
    }
    result += str.substr(fast,slow - fast);
    
    while(slow < str.length())
    {
        fast = slow + 1;
    while(fast < str.length() && str[fast] != '|')
    {
        fast++;
    }
    if(fast >= str.length())
    {
        result += str.substr(slow);
        break;
    }
    int num = stoi(str.substr(slow + 1,fast - slow - 1));
    result += N[num - 1];
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
    string name1,name2,str,line1,line2;
    cin >> name1 >> name2;
    ifstream in1(name1);
    getline(in1,line1);
    vector<string> duizhao = ntw1(line1);
    in1.close();
    ifstream in2(name2);
    while(getline(in2,line2))
    {
        cout << ntw2(line2,duizhao) << endl;
    }
    return 0;
}
