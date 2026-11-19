#include <iostream>
#include <string>
using namespace std;
class Bug
{
    public:
    Bug(int position);
    void turn();
    void move();
    int get_position()const;
    private:
    int pos,d = 1;
};
Bug::Bug(int position)
{
    pos = position;
}
void Bug::turn()
{
    d *= -1;
}
void Bug::move()
{
    pos += d;
}
int Bug::get_position()const
{
    return pos;
}
int main()
{
    Bug bug(0);
    for(int a = 0;a < 10;a++)
    {
        bug.move();
    }
    cout << bug.get_position() << endl;
    for(int a = 0;a < 10;a++)
    {
        bug.turn();
        bug.move();
    }
    cout << bug.get_position() << endl;
}