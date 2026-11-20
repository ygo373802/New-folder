#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class country
{
    public:
    country(double p,double a,string n)
    {
        population = p;
        area = a;
        name = n;
    }
    double get_population()const
    {
        return population;
    }
    double get_area()const
    {
        return area;
    }
    string get_name()const
    {
        return name;
    }
    private:
    double population,area;
    string name;
};
string l_area(const vector<country>& C)
{
    int slow = 0,fast = 0;
    while(fast < C.size())
    {
        if(C[fast].get_area() > C[slow].get_area())
        {
            slow = fast;
        }
        fast++;
    }
    return C[slow].get_name();
}
string l_population(const vector<country>& C)
{
    int slow = 0,fast = 0;
    while(fast < C.size())
    {
        if(C[fast].get_population() > C[slow].get_population())
        {
            slow = fast;
        }
        fast++;
    }
    return C[slow].get_name();
}
string l_density(const vector<country>& C)
{
    int slow = 0,fast = 0;
    while(fast < C.size())
    {
        if((C[fast].get_population() / C[fast].get_area()) > (C[slow].get_population() / C[slow].get_area()))
        {
            slow = fast;
        }
        fast++;
    }
    return C[slow].get_name();
}
int main()
{
    ifstream in("input.txt");
    double p,a;
    string n;
    vector<country> C;
    while(in >> n >> p >> a)
    {
        country c(p,a,n);
        C.push_back(c);
    }
    string largest_area = l_area(C),largest_population = l_population(C),largest_density = l_density(C);
    cout << largest_area << endl;
    cout << largest_density << endl;
    cout << largest_population << endl;

}