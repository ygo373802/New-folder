#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
class ball
{
    public:
    ball(double p);
    void move(double sec);
    void shoot(double v,double angle);
    private:
    double px,py,vx,vy;
};
ball::ball(double p):px(p),py(0){}
void ball::move(double sec)
{
    px += vx * sec;
    py += vy * sec - 0.5 * 9.81 * sec * sec;
    vy -= 9.81 * sec;
}
void ball::shoot(double v,double angle)
{
    double PI = 3.14159265358979323846;
    double a = angle / 180 * PI;
    vx = cos(a) * v;
    vy = sin(a) * v;
    do
    {
        move(0.1);
        cout << px << " " << py << endl;
    }
    while(py > 0);
}
int main()
{
    int pos;
    cin >> pos;
    ball b(pos);
    b.shoot(30,30);
}
