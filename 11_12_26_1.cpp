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
    double num,sum = 0,count = 0;
    while(input >> num)
    {
        sum += num;
        count++;
    }
    cout << sum / count;
    input.close();
    return 0;
}