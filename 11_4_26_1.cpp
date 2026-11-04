#include <iostream>
#include <string>
using namespace std;
void sor(string a[],int size)
{
    for(int n = 1;n < size;n++)
    {
        for(int m = n;m > 0;m--)
        {
            if(a[m].length() < a[m - 1].length())
            {
                swap(a[m],a[m - 1]);
            }
        }
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