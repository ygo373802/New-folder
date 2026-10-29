#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;
double average(vector<double> grades)
{
    sort(grades.begin(),grades.end());
    vector<double> g;
    for(int n = 1;n < grades.size();n++)
    {
        g.push_back(grades[n]);
    }
    double sum = 0;
    for(int n = 0;n < g.size();n++)
    {
        sum = sum + g[n];
    }
    double count = g.size();
    double a = sum / count;
    return a;
}
int main()
{
    vector<double> g;
    double a;
    while(cin >> a)
    {
        g.push_back(a);
    }
    double b = average(g);
    cout << fixed << setprecision(2) << b;
    return 0;

}