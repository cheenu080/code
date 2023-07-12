using ll = long long;
#include <bits/stdc++.h>
using namespace std;
bool perfectsq(ll prod)
{
  if (ceil((double)sqrt(prod)) == floor((double)sqrt(prod)))
  {
    return true;
  }
  return false;
}

void solve()
{
  ll n;
  cin >> n;
  vector<ll> v(n);
  ll prod = 1;
  for (ll i = 0; i < n; i++)
  {
    cin >> v[i];
    prod *= v[i];
  }
  ll sqprod = 1;
  ll i = 0, newprod = 1;
  if (prod == 1)
    cout << 1 << endl;
  else if (perfectsq(prod) == true)
  {

    while (sqprod != sqrt(prod))
    {
      sqprod *= v[i];
      i++;
    }
    cout << i << endl;
  }
  else
    cout << -1 << endl;
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