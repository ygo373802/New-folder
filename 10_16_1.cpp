#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 0,cishu = 0,shu1,shu2,shu3,Max,Min;
    cin >> n;
    shu1 = n / 100;
    shu2 = (n % 100 - n % 10) / 10;
    shu3 = n % 10;
    if(n < 100 || n > 999)
    {
        cout << "wrong number, you should input a number between 100 and 999" << endl;
        return 1;
    }
    else if(shu1 == shu2 && shu1 == shu3)
    {
        cout << "the number can not hold the same number" << endl;
        return 1;
    }
    else
    {
        while(n != 495 && n != 0)
        {
        shu1 = n / 100;
        shu2 = (n % 100 - n % 10) / 10;
        shu3 = n % 10;
        Max = max({shu1 * 100 + shu2 * 10 + shu3,shu1 * 100 + shu3 * 10 + shu2,shu2 * 100 + shu1 * 10 + shu3,shu2 * 100 + shu3 * 10 + shu1,shu3 * 100 + shu2 * 10 + shu1,shu3 * 100 + shu1 * 10 + shu2});
        Min = min({shu1 * 100 + shu2 * 10 + shu3,shu1 * 100 + shu3 * 10 + shu2,shu2 * 100 + shu1 * 10 + shu3,shu2 * 100 + shu3 * 10 + shu1,shu3 * 100 + shu2 * 10 + shu1,shu3 * 100 + shu1 * 10 + shu2});
        n = Max - Min; 
        cishu++;
        }
        cout << cishu;
    }
}