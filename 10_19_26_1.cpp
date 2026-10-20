#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
double shu(string chengji)
{
    string zimu = chengji.substr(0,1);
    double a;
    if(zimu == "A")
    a = 4;
    else if(zimu == "B")
    a = 3;
    else if(zimu == "C")
    a = 2;
    else if(zimu == "D")
    a = 1;
    else if(zimu == "F")
    a = 0;
    string fuhao = chengji.substr(1,1);
    if (fuhao == "+" && zimu != "A")
    a = a + 0.3;
    else if(fuhao == "-")
    a = a - 0.3;
    return a;
}
int main()
{
    string chengji;
    double sum = 0,count = 0;
    while(cin >> chengji && chengji != "Q")
    {
        double c = shu(chengji);
        sum = sum + c;
        count++;
    }
    double a = sum / count;
    int letter = a + 0.5;
    string L,F;
    if(letter == 4)
    L = "A";
    else if(letter == 3)
    L = "B";
    else if(letter == 2)
    L = "C";
    else if(letter == 1)
    L = "D";
    else
    L = "F";
    if(a - letter >= 0.15)
    F = "+";
    else if(a - letter <= -0.15)
    F = "-";
    else 
    F = "";
    cout << L << F << endl;
    return 0;   
}