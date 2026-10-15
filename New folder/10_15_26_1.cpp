#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int n = 0,odd,sum,wei = 0;
    cin >> n;
    int N = n;
    while(n > 0)
    {
      n = n / 10;
      wei++;
    }   
    int zheng;
    int shou,sheng,he = 0;
    while(wei > 0)
    {
        zheng = pow(10,wei - 1);
        shou = N / zheng;
        sheng = N % (zheng / 10);
        wei = wei - 2;
        N = sheng;
        he = he + shou;

    }
    cout << he;
    return 0;
}