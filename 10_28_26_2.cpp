#include <iostream>
#include <vector>
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
    vector<int> kong;
    for(int a = 0;a < size;a++)
    {
        int k = 20 - nums[a] / max * 20;
        kong.push_back(k);
    }
    for(int a = 0;a < 20;a++)
    {
        for(int n = 0;n < size;n++)
        {
            if(kong[n] <= 0)
            {
                cout << "*";
            }
            else
            cout << " ";
            kong[n] = kong[n] - 1;
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