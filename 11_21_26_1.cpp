#include <iostream>
using namespace std;
class vote
{
    public:
    vote();
    void v();
    void v(int a);
    int get_number()const;
    private:
    int number;
};
vote::vote()
{
    number = 0;
}
void vote::v()
{
    number++;
}
void vote::v(int a)
{
    number += a;
}
int vote::get_number()const
{
    return number;
}
