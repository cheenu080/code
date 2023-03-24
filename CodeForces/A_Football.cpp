#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int k = 7;
  int n = s.length();

  for (int i = 0; i < n - k; i++)
  {
    int counter = 0;
    for (int j = i; i < n + k - 1; j++)
    {
      counter++;
    }
    if (counter == k)
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}
