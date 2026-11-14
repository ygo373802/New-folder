#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ifstream input("input.txt");
    if(!input)
    return 1;
    vector<string> boy,girl;
    string boyn,girln,boynumber,girlnumber,boyc,girlc,line;
    while(input >> boyn >> boynumber >> boyc)
    {
        boy.push_back(boyn);
        if(input >> girln >> girlnumber >> girlc)
        girl.push_back(girln);
    }
    sort(boy.begin(),boy.end());
    for(string name : girl)
    {
        if(binary_search(boy.begin(),boy.end(),name))
        cout << name << " ";
    }
    return 0;
}