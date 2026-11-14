#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
string build(const char& ch)
{
    char l = tolower(ch);
    string zimubiao = "abcdefghijklmnopqrstuvwxyz";
    int pos = l - 'a';
    string result = zimubiao.substr(pos) + zimubiao.substr(0,pos);
    return result;
}
char transfer(const char& ch,const bool& jiami,const string& build)
{
    if(!isalpha(ch))
    {
        return ch;
    }
    string zimubiao = "abcdefghijklmnopqrstuvwxyz";
     if(jiami)
     {
        char l = tolower(ch);
        int p = l - 'a';
        return build[p];
     }
     else
     {
        char l = tolower(ch);
        int p = (l - build[0] + 26) % 26;
        return zimubiao[p];
     }
}
int main(int argc,char* argv[])
{
    string key = "",input = "",output = "";
    bool jiami = true;
    for(int i = 1;i < argc;i++)
    {
        string arg = argv[i];
        if(arg == "-d")
            jiami = false;
        else if(arg.substr(0,2) == "-k")
        key = arg.substr(2);
        else if(input.empty())
        input = arg;
        else
        output = arg;
    }
    ifstream in(input);
    ofstream out(output);
    if(key.empty() || !in || !out)
    {
        cerr << "wrong information";
        return 1;
    }
    char ch;
    int count = 0,length = key.length();
    while(in.get(ch))
    {
        string jiamibiao = build(key[count]);
        out << transfer(ch,jiami,jiamibiao);
        if(isalpha(ch))
        count++;
        if(count >= length)
        count = 0;
    }
    return 0;
}