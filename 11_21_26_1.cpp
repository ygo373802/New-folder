#include <iostream>
#include <string>
using namespace std;
class message
{
    public:
    message(const string& from,const string& to);
    void add_line(const string& line);
    string get_text()const;
    private:
    string s,r,body;
};
message::message(const string& from,const string& to):s(from),r(to),body("\n"){}
void message::add_line(const string& line)
{
    body += line + "\n";
}
string message::get_text()const
{
    return "Dear " + r + ":\n" + body + "\nSincerely\n\n" + s;
}
int main()
{
    message letter("Marry","John");
    letter.add_line("I am sorry we must part.");
    letter.add_line("I wish you all the best.");
    cout << letter.get_text();
}