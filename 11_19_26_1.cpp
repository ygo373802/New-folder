#include <iostream>
#include <string>
using namespace std;
class Moth
{
    public:
    Moth(int position);
    void move(int light_postion);
    int get_position()const;
    private:
    int pos;
};
Moth::Moth(int position)
{
    pos = position;
}
void Moth::move(int light_position)
{
    pos = pos + (light_position - pos) / 2;
}
int Moth::get_position()const
{
    return pos;
}