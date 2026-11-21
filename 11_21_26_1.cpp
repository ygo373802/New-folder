#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
class two
{
    public:
    two(int a,int b,int c);
    bool have();
    void real_solutions();
    private:
    int A,B,C;
};
two::two(int a,int b,int c):A(a),B(b),C(c){}
bool two::have()
{
    return pow(B,2) >= 4 * A * C;
}
void two::real_solutions()
{
    if(have())
    {
        cout << (-B + sqrt(B * B - 4 * A * C)) / 2 / A << endl;
        cout << (-B - sqrt(B * B - 4 * A * C)) / 2 / A << endl;
    }
}