#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  
  while (t--)
  {
    string s = "codeforces";
    char c;
    cin >> c;
    bool flag = false;
    for (auto i : s)
    {
      if (c == i)
      {
        flag = true;
        break;
      }
    }
    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}