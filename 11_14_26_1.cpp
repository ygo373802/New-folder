#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<string> words,other;
    ifstream in("input.txt");
    string wor;
    while(in >> wor)
    {
        if(!binary_search(words.begin(),words.end(),wor))
        other.push_back(wor);
    }
    for(int n = 0;n < other.size();n++)
    {
        cout << other[n] << " ";
    }
    return 0;
}