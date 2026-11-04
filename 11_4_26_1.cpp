#include <iostream>
#include <string>
using namespace std;
void sor(string a[],int size)
{
    for(int n = 0;n < size;n++)
    {
        int min = INT_MAX,p;
        for(int m = n;m < size;m++)
        {
            if(a[m].length() < min)
            {
            min = a[m].length();
            p = m;
            }  
        }
        swap(a[p],a[n]);
    }
}
int main()
{
    string a[] = {"a","abc","ab","ac","aasd","adf"};
    int size = 6;
    sor(a,6);
    for(int n = 0;n < size;n++)
    {
        cout << a[n] << " ";
    }
    return 0;
}