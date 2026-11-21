#include <iostream>
#include <string>
#include <vector>
using namespace std;
class menu;
class item
{
    public:
    item(const string& n);
    item(const string& na,const menu& s);
    string get_name()const;
    menu get_sub();
    private:
    menu sub;
    string name;
};
item::item(const string& n) : name(n){}
item::item(const string& na,const menu& s) : name(na),sub(s){}
menu item::get_sub()
{
    return sub;
}
string item::get_name()const
{
    return name;
}
class menu
{
    public:
    void list();
    void select();
    vector<item> get_item();
    private:
    vector<item> items;
    int row;
};
vector<item> menu::get_item()
{
    return items;
}
void menu::list()
{
    for(item str : items)
    {
        cout << str.get_name() << endl;
    }
    cout << "which one do you want to select: ";
    cin >> row;
}
void menu::select()
{
    if(items[row - 1].get_sub().get_item().empty())
    {
        cout << items[row - 1].get_name() << endl;
    }
    else
    {
        items[row - 1].get_sub().list();
    }
}