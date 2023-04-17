#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int cnt1 = count(v.begin(),v.end(),1);

  if(cnt1==n) {cout<<cnt1-1<<endl;return 0;};
  int ans = cnt1;
  for (int i = 0; i < n; i++) {
    int tmp = cnt1;
    for (int j = i; j < n; j++) {
      tmp = tmp - v[j];
      tmp = tmp + (1 - v[j]);
      ans = max(ans, tmp);
    }
  }

  cout << ans << endl;
  return 0;
}
