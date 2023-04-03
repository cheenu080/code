#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

int main() {
  int n, k;
  cin >> n;

  vector<string> v(n);
  unordered_map<string, int> mp;
  set<string> s;

  for (int i = 0; i < n; i++) {
      cin >> v[i];
      mp[v[i]]++;
  }

  for (auto p : mp) {
    if (p.second == 1) {
      s.insert(p.first);
    }
  }
  for(auto it: v)cout<<it<<" ";
  cout<<endl;
  for(auto it: s)cout<<it<<" ";
  cout<<endl;

  cin >> k;

  int cnt = 0;
  for (auto it : v) {
    if (s.count(it) > 0) {
      cnt++;
        if (cnt == k) {
          cout << it << endl;
          return 0;
        }
    }
  }

  cout << "" << endl;

  return 0;
}
