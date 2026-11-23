#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string re;
    getline(cin,re);
    int left = 0,right = re.length() - 1;
    bool is = true;
    while(left <= right)
    {
        while(!isalpha(re[left]))
        {
            left++;
        }
        while(!isalpha(re[right]))
        {
            right--;
        }
        if(left > right)
        break;
        if(tolower(re[left]) != tolower(re[right]))
        {
            cout << "no" << endl;
            is = false;
            break;
        }
        left++;
        right--;
    }
    if(is)
    cout << "yes";
    return 0;
}