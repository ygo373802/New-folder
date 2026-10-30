#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int next(bool occpy[],int a)
{
    int n = 0,current = 0,chang = 0,left = 0,right = 0;
    for(;n < a;++n)
    {
        if(!occpy[n])
        {
            current++;
        }
        if(occpy[n] || n == a - 1)
        {
        if(current > chang)
        {
            chang = current;
            right = n + (occpy[n] ? -1 : 0);
            left = right - current + 1;
        }
        current = 0;
    }
    }
    int wei = (left + right) / 2;
    return wei;
}
int main()
{
    bool f = false,t = true;
    bool a[] = {f,f,f,f,t,f,f,f,f,f};
    int b = 10;
    int c = next(a,b);
    cout << c;
    return 0;
}