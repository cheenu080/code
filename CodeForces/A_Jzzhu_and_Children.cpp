#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main()
{
  int n, sweetAvail, last;
  double sweetReq, max=0;
  cin >> n >> sweetAvail;

  for (int i = 1; i <= n; i++)
  {
    cin >> sweetReq;
    if (ceil(sweetReq / sweetAvail) >= max)
    {
      last = i;
      max = ceil(sweetReq / sweetAvail);
    }
  }

  cout << last << endl;
  return 0;
}
