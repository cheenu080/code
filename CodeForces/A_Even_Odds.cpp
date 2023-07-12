#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n, pos;
  cin >> n >> pos;

  long long int mid = (n + 1) / 2;
  long long int ans;
  if (pos <= mid)
    ans = 2 * pos - 1;
  else
    ans = 2 * (pos - mid);

  cout << ans << endl;
  return 0;
}
