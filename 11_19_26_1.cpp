#include <iostream>
using namespace std;
class light
{
    public:
    int get_first_switch_state()const;
    int get_second_switch_state()const;
    int get_lamp_state()const; 
    void toggle_first_switch();
    void toggle_second_switch();
    private:
    int first = 0,second = 0;
};
int light::get_first_switch_state()const
{
return first;
}
int light::get_second_switch_state()const
{
    return second;
}
int light::get_lamp_state()const
{
    if(first == 0 && second == 0)
    return 0;
    return 1;
}
void light::toggle_first_switch()
{
    first = (first + 1) % 2;
}
void light::toggle_second_switch()
{
    second = (second + 1) % 2;
}