#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<long long int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  long long count = 0;
  for (int i = 0; i < n; i++) {
    count += abs(v[i] - (i + 1));
  }

  cout << count << endl;

  return 0;
}
