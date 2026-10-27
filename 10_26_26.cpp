#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int size = 0,c = 0;
    int v[1000];
    while(true)
    {
        cin >> v[c];
        if(cin.fail())
        break;
        size++;
        c++;
    }
    int b[size / 2];
    for(int a = 0;a < size / 2;a++)
    {
        b[a] = v[a];
    }
    for(int a = size / 2;a < size;a++)
    {
        v[a - size / 2] = v[a];
         v[a] = b[a - size / 2];
    }
    for(int a = 0;a < size;a++)
    {
        cout << v[a] << ",";
    }
    return 0;
}