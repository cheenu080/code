#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;

  vector<int> v(n);
  for (int i = 0; i < n; i++){
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int i = 0, j = n - 1;
  int bag = 0;
  while (i <= j){
    if (v[i] + v[j] <= x){
      i++;
      j--;
    }
    else{
      j--;
    }
    bag++;
  }

  cout << bag << endl;
  return 0;
}
