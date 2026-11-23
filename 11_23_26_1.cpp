#include <iostream>
#include <algorithm>
using namespace std;
int findm(const int& left,const string& str)
{
  int a = str.find('A'),b = str.find('B'),c = str.find('C');
  int p = max({a,b,c});
  return p + 1;
}
int findr(const int& left,const string& str)
{
  int a = str.length() - 1,b = str.length() - 1,c = str.length() - 1;
  while(str[a] != 'A')
  {
    a--;
  }
  while(str[b] != 'B')
  {
    b--;
  }
  while(str[c] != 'C')
  {
    c--;
  }
  int p = min({a,b,c});
  return p;
}
int main()
{
  int length;
  double count = 0;
  cin >> length;
  string str;
  cin >> str;
  int left = findm(0,str);
  int right = findr(0,str);
  int pa = str.find('A',left),pb = str.find('B',left),pc = str.find('C',left);
  for(int a = left;a <= right;a++)
  {
    if(pa < a)
    pa = str.find('A',a);
    if(pb < a)
    pb = str.find('B',a);
    if(pc < a)
    pc = str.find('C',a);
    if(pa == string::npos || pb == string::npos || pc == string::npos)
    break;
  
  int m = max({pa,pb,pc}) + 1;
  if(m <= right)
  count += (right - m + 1);
  }
  cout << count;
  return 0;
}