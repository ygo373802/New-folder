#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    double qianda = max(a,b),houda = max(b,c),da = max({a,b,c});
    cout << qianda << " " << houda << " " << da << endl;
    return 0;


}