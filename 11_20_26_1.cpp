#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <ctime>
using namespace std;
class Message
{
    public:
    Message(string sender,string re);
    void append(string line);
    string to_string();
    void print();
    private:
    string m,sender,rec,times;
};
Message::Message(string s,string r)
{
    time_t now = time(0);
    times = ctime(&now);
    sender = s,rec = r;
}
void Message::append(string line)
{
    m += line + "\n";
}
string Message::to_string()
{
    m = "From: " + sender + "\nTo: " + rec + "\n" + m;
    return m;
}
void Message::print()
{
    cout << to_string();
}