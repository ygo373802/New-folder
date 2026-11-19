#include <iostream>
#include <vector>
using namespace std;
class Rectangle
{
    public:
    Rectangle(double length,double wideth);
    double get_perimeter()const;
    double get_area()const;
    void resize(double factor);
    private:
    double l,w;
};
Rectangle::Rectangle(double length,double wideth)
{
    l = length;
    w = wideth;
}
double Rectangle::get_perimeter()const
{
    return 2 * (l + w);
}
double Rectangle::get_area()const
{
    return l * w;
}
void Rectangle::resize(double factor)
{
    l *= factor;
    w *= factor;
}
