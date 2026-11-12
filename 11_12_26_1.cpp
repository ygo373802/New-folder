#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ifstream input("input.txt");
    if(input.fail())
    return 1;
    ofstream output("output.txt");
    string str;
    while(getline(input,str))
    {
        for(int n = str.length() - 1;n >= 0;--n)
        {
            output << str[n];
        }
        output << endl;
    }
    input.close();
    output.close();
    return 0;
}