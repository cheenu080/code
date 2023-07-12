#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  int count25 = 0, count50 = 0;
  for (int i = 0; i < t; i++) {

    int ruble;cin >> ruble;

    if (ruble == 25) count25++;
    
    else if (ruble == 50){
      count25--;
      count50++;
    }

    else if (ruble == 100){
      if (count50 > 0){
        count50--;
        count25--;
      }
      else count25 =count25-3;
    }

    if (count25 < 0 || count50 < 0){
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}
