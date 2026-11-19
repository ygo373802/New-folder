#include <iostream>
#include <vector>
using namespace std;
class light
{
    public:
    
    int get_lamp_state()const;
    int get_switch_state(int switch_num)const;
    void toggle_switch(int switch_num);
    private:
    vector<int> l = {0,0};
};
void light::toggle_switch(int switch_num)
{
    if(switch_num != 0 && switch_num != 1)
    return;
    l[switch_num - 1] = (l[switch_num - 1] + 1) % 2;
}
int light::get_switch_state(int switch_num)const
{
    return l[switch_num - 1];
}
int light::get_lamp_state()const
{
    return l[0] == l[1];
}

