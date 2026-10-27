#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int cishu,mian = 20;
    cin >> cishu;
    int ci[mian] = {0,0,0,0,0,0};
    for(int a = 0;a < cishu;a++)
    {
        int dian = rand() % mian + 1;
        ci[dian - 1]++;
    }
    for(int a = 0;a < mian;a++)
    {
        cout << a + 1 << " : " << ci[a] << endl;
    }
    return 0;
}