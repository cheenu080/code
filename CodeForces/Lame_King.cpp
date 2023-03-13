using ll = long long;
#include <bits/stdc++.h>
using namespace std;

void solve()
{
  ll a, b;
  cin >> a >> b;
  ll c = abs(a);
  ll d = abs(b);
  ll skip = abs(c - d) - 1;

  ll ans = c + d + skip;
  if (c == d)
    cout << 2 * c << endl;
  else
    cout << ans << endl;
}

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}