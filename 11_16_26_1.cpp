#include <iostream>
using namespace std;
class account
{
    public:
    account();
    account(double m);
    void withdraw(double m);
    void deposit(double m);
    void penalty();
    void interest(double rate);
    double get()const;
    private:
    double money;
};
account::account()
{
money = 0;
}
account::account(double m)
{
    money = m;
}
void account::withdraw(double m)
{
    if(money >= m)
money -= m;
else
penalty();
}
void account::deposit(double m)
{
    money += m;
}
void account::penalty()
{
    money -= 10;
}
void account::interest(double rate)
{
    money *= (1 + rate / 100);
}
double account::get()const
{
    return money;
}
int main()
{
    account n(9000);
}