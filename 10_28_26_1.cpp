#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int numbers[10];
    for(int a = 0;a < 10;a++)
    {
        numbers[a] = rand();
    }
    for(int a = 0;a < 10;a = a + 2)
    {
        cout << numbers[a] << " ";
    }
    cout << endl;
    for(int a = 0;a < 10;++a)
    {
        if(numbers[a] % 2 == 0)
        cout << numbers[a] << " ";
    }
    cout << endl;
    for(int a = 0;a < 10;++a)
    {
        cout << numbers[9 - a] << " ";
    }
    cout << endl;
    cout << numbers[0] << " " << numbers[9] << endl;
    return 0;
}