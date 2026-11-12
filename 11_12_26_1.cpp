#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;
int main(int argc,char* argv[])
{
    ofstream out(argv[argc - 1],ios::binary);
    if(out.fail())
    return 1;
    for(int n = 1;n < argc - 1;++n)
    {
        ifstream in(argv[n],ios::binary);
        if(in.fail())
        return 1;
        out << in.rdbuf();
        in.close();
    }
    return 0;
}