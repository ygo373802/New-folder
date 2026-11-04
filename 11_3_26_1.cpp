#include <iostream>
#include <vector>
#include <string>
#include <cfloat>
#include <cstdlib>
#include <ctime>
using namespace std;
void flood(double dixing[10][10],double shuiwei)
{
    for(int n = 0;n < 10;n++)
    {
        for(int m = 0;m < 10;m++)
        {
            if(dixing[n][m] <= shuiwei)
            {
                cout << "*";
            }
            else
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    srand(time(0));
    double di[10][10];
    for(int n = 0;n < 10;n++)
    {
        for(int m = 0;m < 10;m++)
        {
            di[n][m] = rand() % 10;
            cout << di[n][m] << " ";
        }
        cout << endl;
    }
    for(double n = 0;n < 10;n++)
    {
    flood(di,n);
    cout << endl;
    }
}