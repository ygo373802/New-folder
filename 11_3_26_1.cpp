#include <iostream>
#include <vector>
using namespace std;
void d(double p[],bool is[],int num)
{
    bool have = false;
    int item = 0;
    for(int n = 0;n < num;n++)
    {
       if(is[n])
       have = true;
       else
       item++;
    }
    if(have && item > 4)
    {
        double sum = 0;
        for(int n = 0;n < num;n++)
        {
            if(!is[n])
            sum = sum + p[n];
        }
        double dis = sum * 0.2;
        cout << dis;
        return;
    }
    else
    cout << "no discount";

}
int main()
{
   double price[100000];
   string jiancha;
   double jiage;
   int num = 0;
   bool is[100000] = {false};
   while(true)
   {
    cin >> jiage;
    if(jiage == -1)
    break;
    cin >> jiancha;
    if(jiancha == "Y")
    {
        is[num] = true;
    }
    price[num] = jiage;
    num++;
   }
   d(price,is,num);

}