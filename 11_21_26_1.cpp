#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
class resistor
{
    public:
    resistor(double r,double t);
    double get_ar();
    double get_t();
    double get_nr();
    private:
    double re,to,actual;
};
resistor::resistor(double r,double t) : re(r),to(t)
{
    double low = r * (1 - t),high = r * (1 + t);
    actual = (static_cast<double>(rand()) / RAND_MAX) * (high - low) + low;
}
double resistor::get_ar()
{
    return actual;
}
double resistor::get_nr()
{
    return re;
}
double resistor::get_t()
{
    return to;
}
int main()
{
    for(int a = 0;a < 10;a++)
    {
        resistor r(330,0.1);
        cout << r.get_ar() << endl;
    }
}