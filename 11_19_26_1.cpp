#include <iostream>
#include <string>
using namespace std;
class buy
{
    public:
    buy(double coin,double price);
    int decision();
    bool e()const;
    private:
    double change;
    bool enough;
};
bool buy::e()const
{
    return enough;
}
buy::buy(double coin,double price)
{
    if(coin >= price)
    {
        enough = true;
        change = coin - price;
    }
    else
    {
    enough = false;
    change = coin;
    }
}
int buy::decision()
{
    return change;
}
int main()
{
    double coin,price;
    cin >> coin >> price;
    buy b(coin,price);
    if(b.e())
    {

    }
    cout << b.decision();
    return 0;
}