#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
int main()
{
    string name;
    cin >> name;
    ifstream in(name);
    vector<double> count(26,0);
    double counts = 0;
    char ch;
    while(in.get(ch))
    {
        if(isalpha(ch))
        {
            double pos = ch - 'a';
            count[pos]++;
            counts++;
        }
    }
    int m = 0;
    for(int n = 0;n < 26;n++)
    {
        char ch = 'a' + n;
        cout << ch << " ";
        if(count[n] >= 1)
        {
            cout << right << setw(3) << count[n] << "% ";
        }
        else
        cout << setw(3) << "< 1%";
        m++;
        if(m == 3)
        {
            m = 0;
            cout << endl;
        }
    }
    return 0;
    

}