#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    srand(time(0));
    vector<int> a;
    int size;
    cin >> size;
    for(int n = 0;n < size;++n)
    {
        int num = rand() % 9 + 1;
        a.push_back(num);
    }
    for(int n = 0;n < size;++n)
    {
        cout << a[n] << " ";
    }
    cout << endl;
    sort(a.begin(),a.end());
    for(int n = 0;n < size;++n)
    {
        cout << a[n] << " ";
    }
    return 0;
}