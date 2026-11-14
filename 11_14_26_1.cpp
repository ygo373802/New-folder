#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    ifstream in("how_to_1/worldpop.txt");
    if(!in)
    return 1;
    double wpop = 0;
    string line;
    while(getline(in,line))
    {
        string cname = "";
        while(line.empty())
        continue;
        stringstream l(line);
        char ch;
        while(l.get(ch) && isspace(ch))
        {}
        do
        {
            if(!isspace(ch))
            cname += ch;
            else
            {
                while(l.get(ch) && isspace(ch))
                {}
                if(isdigit(ch))
                {
                    l.unget();
                    break;
                }
                else
                {
                    cname += " ";
                    cname += ch;
                }
            }
        }
        while(l.get(ch));
        double pop;
        if(l >> pop)
        {
            if(cname != "Eropean Union")
            wpop += pop;
        }
    }
    return 0;
}