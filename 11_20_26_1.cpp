#include <iostream>
using namespace std;
class CashRegister
{
    public:
    CashRegister(double rate);
    void buy(double p);
    void pay(double money);
    double get_sales_total()const;
    int get_sales_count()const;
    void reset_sales();
    private:
    double sales_total,price,tax;
    int sales_count,count;
};
CashRegister::CashRegister(double rate)
{
    price = 0;
    tax = rate;
    count = 0;
    sales_count = 0;
    sales_total = 0;
}
void CashRegister::buy(double p)
{
    price += p;
    sales_total += p;
    sales_count++;
}
void CashRegister::pay(double money)
{
    double t = price * tax;
    double change = money - t - price;
    cout << "original price is " << price << " tax is " << tax << " the change is: " << change;
}
double CashRegister::get_sales_total()const
{
    return sales_total;
}
int CashRegister::get_sales_count()const
{
    return sales_count;
}
void CashRegister::reset_sales()
{
    sales_count = 0;
    sales_total = 0;
}