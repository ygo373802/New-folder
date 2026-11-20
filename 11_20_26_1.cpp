#include <iostream>
using namespace std;
class microwave
{
    public:
    void increasing();
    void switching();
    void reset();
    void start();
    private:
    int time,level;
};
void microwave::increasing()
{
    time += 30;
}
void microwave::switching()
{
    level = level % 2 + 1;
}
void microwave::reset()
{
    time = 0;
    level = 1;
}
void microwave::start()
{
    cout << "Cooking for " << time << "seconds at level " << level;
} 