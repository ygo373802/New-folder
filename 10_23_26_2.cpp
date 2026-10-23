#include<iostream>
#include <string>
using namespace std;
int mi(int a,int b)
{
    if(b == 1)
    return a;
    else if(b == 0)
    return 1;
    else
    {
        --b;
        return a * mi(a,b);
    }
}
int main()
{
    int a,b;
    cin >> a >> b;
    int c = mi(a,b);
    cout << c;
    return 0;
}