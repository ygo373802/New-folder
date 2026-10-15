#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    string name,full_name = "";
    getline(cin,name);
    int grade,zhihe = 0,count = 0;
    string g = "";
    while(cin >> grade && grade != -1)
    {
      zhihe = zhihe + grade;
      count++;
      g = g + to_string(grade) + " ";
    }
    int ave = zhihe / count;
    cout << ave << endl;
    cout << name << " " << g << "-1";

    return 0;
}