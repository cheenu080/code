#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;
  int limit=3*t;
  vector<int> v;
  int x, y, z;
  while (t--)
  {
    cin >> x >> y >> z;
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
  }

  int sum1 = 0, sum2 = 0, sum3 = 0;
  for (int i = 0; i < limit; i++)
  {
    sum1 += v[3 * i - 2];
  }
  for (int i = 1; i < limit; i++)
  {
    sum2 += v[3 * i - 2];
  }
  for (int i = 1; i < limit; i++)
  {
    sum3 += v[3 * i - 1];
  }

  // if (sum1 == 0 && sum2 == 0 && sum3 == 0)
  //   cout << "YES" << endl;
  // else
  //   cout << "NO" << endl;
  cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
}
