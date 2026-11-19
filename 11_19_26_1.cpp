#include <iostream>
#include <string>
using namespace std;
class StreetAddress
{
    public:
    StreetAddress(string a,string b,string c,string d,string e);
    StreetAddress(string a,string b,string c,string d,string e,string number);
    void print()const;
    bool comes_before(StreetAddress a1,StreetAddress a2);
    string get_code()const;
    private:
    string house_number,street,apartment_number,city,state,postal_code;
};
string StreetAddress::get_code()const
{
    return postal_code;
}
StreetAddress::StreetAddress(string a,string b,string c,string d,string e)
{
    house_number = a;
    street = b;
    city = c;
    state = d;
    postal_code = e;
}
StreetAddress::StreetAddress(string a,string b,string c,string d,string e,string number)
{
    house_number = a;
    street = b;
    city = c;
    state = d;
    postal_code = e;
    apartment_number = number;
}
void StreetAddress::print()const
{
    cout << street;
    if(!apartment_number.empty())
    cout << " " << apartment_number;
    cout << endl;
    cout << city << " " << state << " " << postal_code << endl;
}
bool StreetAddress::comes_before(StreetAddress a1,StreetAddress a2)
{
    return a1.get_code() <= a2.get_code();
}