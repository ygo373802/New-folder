#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
int search(vector<int> a,int from,int to,int target)
{
    if(from > to)
    return -1;
    int m = from + (to - from) / 2;
    if(a[m] == target)
    return m;
    else if(a[m] < target)
    return search(a,m + 1,to,target);
    else
    return search(a,from,m - 1,target);
}
