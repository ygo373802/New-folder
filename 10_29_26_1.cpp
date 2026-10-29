#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
using namespace std;
void remove(int a[],int& size,int given)
{
    for(int n = 0;n < size;)
    {
        if(a[n] < given)
        {
            for(int m = n;m < size;m++)
            {
                a[m] = a[m + 1]; 
            }
            size--;
        }
        else
        n++;
    }
}
int main()
{
    int a[10] = {1,2,3,4,5,6,7};
    int size = 7,n = 4;
    remove(a,size,n);
    for(int m = 0;m < size;m++)
    {
        cout << a[m] << " ";
    }
    return 0;
}