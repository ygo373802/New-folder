#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    ofstream output("hello.txt");
    output << "Hello World!";
    output.close();
    ifstream input("hello.txt");
    string str;
    getline(input,str);
    cout << str;
    return 0;
}