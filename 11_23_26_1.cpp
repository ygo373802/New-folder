#include <bits/stdc++.h>
using namespace std;
void fast()
{
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
}
int main()
{
  long long ans = 0;
  fast();
  int n;
  string s;
  cin >> n >> s;
  bool left[3],right[3];
  int L = 0,R = n - 1;
  while(L < R)
  {
    left[s[L] - 'A'] = true;
    if(left[0] && left[1] && left[2])
    break;
    L++;
  }
  L++;
  while(L < R)
  {
    right[s[R] - 'A'] = true;
    if(right[0] && right[1] && right[2])
    break;
    R--;
  }
  int l = L,r = L;
  int zt[3];
  for(;l <= R;l++)
  {
    while(zt[0] == 0 || zt[1] == 0 || zt[2] == 0)
    {
      zt[s[r] - 'A']++;
      r++;
    }
    ans += R - r + 1;
    zt[s[l] - 'A']--;
  }
  cout << ans;
  return 0;
}