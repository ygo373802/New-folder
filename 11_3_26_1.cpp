#include <iostream>
#include <vector>
#include <string>
#include <cfloat>
using namespace std;
void smooth(double sta[],int size)
{
    double smem = sta[0],fmem;
    sta[0] = (sta[0] + sta[1]) / 2;
    for(int n = 1;n < size - 1;++n)
    {
        fmem = sta[n];
        sta[n] = (smem + sta[n] + sta[n + 1]) / 3;
        smem = fmem;
    }
    sta[size - 1] = (sta[size - 1] + smem) / 2;
    for(int n = 0;n < size;n++)
    {
        cout << sta[n] << " ";
    }
}
int main()
{
    double a[] = {1,3,4,8,13,7,2};
    int size = 7;
    smooth(a,size);
    return 0;
}