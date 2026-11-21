#include <iostream>
#include <string>
#include <vector>
using namespace std;
class ComboLock
{
public:
   ComboLock(const int& secret1, const int& secret2,const int& secret3);
   void reset();
   void turn_left(const int& ticks);
   void turn_right(const int& ticks);
   bool open() const;
private:
   vector<int> t;
   vector<int> right;
};
ComboLock::ComboLock(const int& secret1,const int& secret2,const int& secret3)
{
    right.push_back(secret1);
    right.push_back(secret2);
    right.push_back(secret3);
}
void ComboLock::reset()
{
    t = {};
}
void ComboLock::turn_left(const int& ticks)
{
    t.push_back(ticks);
}
void ComboLock::turn_right(const int& ticks)
{
    t.push_back((40 - ticks) % 40);
}
bool ComboLock::open()const
{
    return right == t;
}