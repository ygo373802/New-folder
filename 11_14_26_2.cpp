#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>
using namespace std;
string build(const string& str)
{
    string result = "";
    for(int n = 0;n < str.length();++n)
    {
        char l = tolower(str[n]);
        if(isalpha(l) && result.find(l) == string::npos)
        result += l;
    }
    for(char c = 'z';c > 'a';c--)
    {
        if(result.find(c) == string::npos)
        result += c;
    }
    return result;
}
char tranform(char ch,const string& zimubiao,const string& jiami,const bool& jm)
{
    if(!isalpha(ch))
    return ch;
    char l = tolower(ch);
    if(jm)
    {
        int pos = zimubiao.find(l);
        return jiami[pos];
    }
    else
    {
        int pos = jiami.find(l);
        return zimubiao[pos];
    }
}
int main(int argc,char* argv[])
{
    bool jm = false;
    string key = "",in = "",out = "";
    for(int i = 1;i < argc;++i)
    {
        string arg = argv[i];
        if(arg == "-d")
        jm = true;
        else if(arg.substr(0,2) == "-k")
        key = arg.substr(2);
        else if(in.empty())
        in = arg;
        else
        out = arg;
    }
    if(key.empty())
    return 1;
    string zimubiao = "abcdefghijklmnopqrstuvwxyz";
    string jiami = build(key);
    ifstream infile(in);
    ofstream outfile(out);
    if(!infile || !outfile)
    return 1;
        char letter;
        while(infile.get(letter))
        {
            letter = tranform(letter,zimubiao,jiami,jm);
            outfile << letter;
        }
    return 0;
}