#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> card((4*n)-1);
  vector<int>freq(n+1);
  for(int i = 0; i < (4 * n) - 1; i++)
  {
    cin >> card[i];
    freq[card[i]]++;
  }
  int ans = 0;
  for(int i = 1; i <= n; i++)
  {
    if(freq[i] != 4)
    {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}