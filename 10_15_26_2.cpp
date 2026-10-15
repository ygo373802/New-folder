#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<string>
#include<random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<>distrib_h(0,14);

    int h = distrib_h(gen);
    if(0 <= h && h <= 9)
    cout << "1";
    else if(10 <= h && h <= 12)
    cout << "2";
    else
    cout << "3";
    return 0;
}