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
class vd
{
    public:
    vd(resistor R1,resistor R2);
    double get_nv();
    double get_av();
    private:
    resistor r1,r2;
};
vd::vd(resistor R1,resistor R2) : r1(R1),r2(R2){}
double vd::get_nv()
{
    return r1.get_nr() / (r1.get_nr() + r2.get_nr());
}
double vd::get_av()
{
    return r1.get_ar() / (r1.get_ar() + r2.get_ar());
}
int main()
{
    resistor r1(250,0.05),r2(750,0.05);
    vd v(r1,r2);
    cout << v.get_av() << endl;
    cout << v.get_nv() << endl;
}