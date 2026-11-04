#include <iostream>
#include <string>
#include <vector>
using namespace std;
void merge(vector<string>& phone,vector<string>& name,int low,int mid,int high)
{
    int l = low,r = mid + 1;
    vector<string> tphone,tname;
    while(l <= mid && r <= high)
    {
        if(phone[l] <= phone[r])
        {
            tphone.push_back(phone[l]);
            tname.push_back(name[l]);
            ++l;
        }
        else if(phone[l] > phone[r])
        {
            tphone.push_back(phone[r]);
            tname.push_back(name[r]);
            ++r;
        }
    }
    if(l <= mid)
    {
        for(int n = l;n <= mid;n++)
        {
            tphone.push_back(phone[n]);
            tname.push_back(name[n]);
        }
    }
    if(r <= high)
    {
        for(int n = r;n <= high;n++)
        {
            tphone.push_back(phone[n]);
            tname.push_back(name[n]);
        }
    }
    for(int n = 0;n < tphone.size();n++)
    {
        phone[n + low] = tphone[n];
        name[n + low] = tname[n];
    }
}
void mergesort(vector<string>& phone,vector<string>& name,int low,int high)
{
    if(low >= high)
    return;
    int mid = low + (high - low) / 2;
    mergesort(phone,name,low,mid);
    mergesort(phone,name,mid + 1,high);
    merge(phone,name,low,mid,high);
}
int namesearch(vector<string> phones,string phone)
{
    int low = 0,high = phones.size() - 1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(phones[mid] == phone)
        {
            return mid;
        }
        else if(phone < phones[mid])
        high = mid - 1;
        else
        low = mid + 1;
    }
    return -1;
}
int main()
{
    int geshu = 1000;
    vector<string> name,phone;
    string na,ph;
    for(int n = 0;n < geshu;n++)
    {
        cin >> na >> ph;
        name.push_back(na);
        phone.push_back(ph);
    }
    string searchphone;
    vector<string> sphone,sname;
    cin >> searchphone;
    mergesort(phone,name,0,phone.size() - 1);
    int p = namesearch(sphone,searchphone);
    if(p < 0)
    {
        cout << "this number does not true";
        return 1;
    }
    cout << sname[p];
    return 0;
}
