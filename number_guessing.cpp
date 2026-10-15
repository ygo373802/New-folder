#include<iostream>
using namespace std;
int main()
{
    cout << "think a number between 0 and 100,I will try to find it out" << endl;
    int da = 100,xiao = 0,zhong = 50;
    
    string huida;
    bool budui = true;
    while(budui)
    {
        zhong = (da + xiao) / 2;
        cout << "is the number" << zhong << "? yes or no,if no, please tell me whether it is larger or smaller(typing l or s)?" << endl;
        cin >> huida;
        if(huida == "s")
        {
            da = zhong - 1;
        }
        else if(huida == "l")
        {
            xiao = zhong + 1;
        }
        else if(huida == "yes")
        budui = false;
        if(da < xiao)
        {
            cout << "you are cheating";
            budui = false;
        }
        
    }

}