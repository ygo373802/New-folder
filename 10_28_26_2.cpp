#include <iostream>
using namespace std;
void tu(int nums[],int size)
{
    double max = nums[0];
    for(int a = 0;a < size;a++)
    {
        if(max < nums[a])
        max = nums[a];
    }
    double bizhi;
    for(int a = 0;a < size;a++)
    {
        bizhi = nums[a] / max;
        int shu = bizhi * 40;
        for(int b = 0;b < shu;b++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int size,shu;
    int nums[size];
    cin >> size;
    for(int a = 0;a < size;a++)
    {
        cin >> shu;
        nums[a] = shu;
    }
    tu(nums,size);
    return 0;
}