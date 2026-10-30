#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int main()
{
    srand(time(0));
    vector<vector<int>> pailie;
    for(int a = 0;a < 10;++a)
    {
        vector<int> ku = {1,2,3,4,5,6,7,8,9,10};
        vector<int> suiji;
        for(int b = 0;b < 10;++b)
        {
            int c = ku.size();
            int d = rand() % c;
            suiji.push_back(ku[d]);
            for(int e = d;e < c - 1;++e)
            {
                ku[e] = ku[e + 1];
            }
            ku.pop_back();
        }
        pailie.push_back(suiji);
    }
    for(int n = 0;n < 10;++n)
    {
        for(int m = 0;m < 10;++m)
        {
            cout << pailie[n][m] << " ";
        }
        cout << endl;
    }
    return 0;
}