#include <iostream>
#include <string>
using namespace std;
void dayin(string s)
{
    int sheng = 40 - s.length();
    if (sheng == 0)
    cout << s << endl;
    else
{
    while(sheng > 0)
    {
        int a = 1;
        for(;a < s.length();a++)
        {
            if(s.substr(a,1) == " " && s.substr(a - 1,1) != " ")
            {
                s = s.substr(0,a) + " " + s.substr(a);
                --sheng;
            }
            if(sheng == 0)
            break;
        }
    }
    cout << s << endl;
}
}
int main()
{
    string a;
    int chang = 0;
    cin >> a;
    string chuan = a;
    chang = a.length();
    while(cin >> a)
    {
        if(chang + a.length() + 1 <= 40)
        {
        chang = chang + a.length() + 1;
        chuan = chuan + " " + a;
        }
        else
        {
        dayin(chuan);
        chang = a.length();
        chuan = a;
        }   
    }
    dayin(chuan);
    return 0; 
}