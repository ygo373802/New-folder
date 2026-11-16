#include <iostream>
using namespace std;
class Menu
{
    public:
    Menu();
    void dis()const;
    void again()const;
    private:
    int num;
};
Menu::Menu()
{
    num = 0;
}
void Menu::again()const
{
    double n;
    cin >> n;
    if(n != 1 && n != 2 && n!= 3 && n != 4)
    {
        cout << "invalid number,please try again" << endl;
        dis();
    }
}
void Menu::dis()const
{
    cout << "1) Open new account" << endl;
    cout << "2) Log into existing account" << endl;
    cout << "3) Help" << endl;
    cout << "4) Quit" << endl;
    cout << "please enter a number" << endl;
    again();
}
int main()
{
    Menu a;
    a.dis();
    return 0;
}