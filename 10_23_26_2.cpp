#include<iostream>
#include <string>
using namespace std;
void mark(int a)
{
    if(a == 1)
    cout << ":::||";
    if(a == 2)
    cout << "::|:|";
    if(a == 3)
    cout << "::||:";
    if(a == 4)
    cout << ":|::|";
    if(a == 5)
    cout << ":|:|:";
    if(a == 6)
    cout << ":||::";
    if(a == 7)
    cout << "|:::|";
    if(a == 8)
    cout << "|::|:";
    if(a == 9)
    cout << "|:|:";
    if(a == 0)
    cout << "||:::";
}
void shu(string a)
{
    int t = 0;
   for(int n = 0;n < a.length();n++)
   {
    int b = stoi(a.substr(n,1));
    mark(b);
    t = t + b;
   }
   int m = (10 - t % 10) % 10;
   mark(m);
}
int main()
{
    string a;
    cin >> a;
    shu(a);
    return 0;
}