#include <iostream>
#include <string>
#include <vector>
using namespace std;
class ComboLock
{
public:
   ComboLock(int secret1, int secret2, int secret3);
   void reset();
   void turn_left(int ticks);
   void turn_right(int ticks);
   bool open() const;
private:
   int s1,s2,s3,state,d;
};
ComboLock::ComboLock(int secret1,int secret2,int secret3):s1(secret1),s2(secret2),s3(secret3),state(0),d(0){}
void ComboLock::reset()
{
    state = 0;
    d = 0;
}
void ComboLock::turn_left(int ticks)
{
    d = (ticks + d) % 40;
    if(state == 1 && d == s2)
    state = 2;
    else
    state = -1;
}
void ComboLock::turn_right(int ticks)
{
    d = (40 + d - ticks % 40) % 40;
    if(state == 0 && d == s1)
    {
        state = 1;
    }
    else if(state == 2 && d == s3)
    {
        state = 3;
    }
    else
    state = -1;
}
bool ComboLock::open()const
{
    return state == 3;
}