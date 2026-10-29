#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int size = 10;
    int a[size];
    int b;
    for(int n = 0;n < size;n++)
    {
        cin >> b;
        a[n] = b;
    }
    for(int n = 0;n < size;n++)
    {
        cout << a[size - n - 1] << " ";
    }
    return 0;
}