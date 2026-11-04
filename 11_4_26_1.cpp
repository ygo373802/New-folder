#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void s(vector<int>& a)
{
    for(int n = 0;n < a.size();n++)
    {
        int min = INT_MAX,p;
        for(int m = n;m < a.size();m++)
        {
            if(a[m] < min)
            {
                min = a[m];
                p = m;
            }
        }
        swap(a[n],a[p]);
    }
}
int main()
{
    srand(time(0));
    vector<int> a;
    for(int n = 0;n < 10;++n)
    {
        int m = rand() % 99 + 1;
        a.push_back(m);
    }
    for(int n = 0;n < 10;n++)
    {
        cout << a[n] << " ";
    }
    cout << endl;
    s(a);
    for(int n = 0;n < 10;n++)
    {
        cout << a[n] << " ";
    }
}