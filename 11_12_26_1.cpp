#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cin >> name;
    ifstream input(name);
    if(input.fail())
    return 1;
    double leftnum,rightnum,leftsum = 0,rightsum = 0,leftcount = 0,rightcount = 0;
    while(input >> leftnum)
    {
        leftsum += leftnum;
        leftcount++;
        input >> rightnum;
        rightsum += rightnum;
        rightcount++;
    }
    input.close();
    double lefta = leftsum / leftcount,righta = rightsum / rightcount;
    return 0;
}