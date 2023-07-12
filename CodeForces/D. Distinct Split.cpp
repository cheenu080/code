#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin >> t;
  while (t--)
  {
    int n;cin >> n;

    string s;cin >> s;

    set<char> st;
    vector<int> v1(n);

    for (int i = 0; i < n; i++){
      st.insert(s[i]);
      v1[i] = st.size();
    }

    vector<int> v2(n);
    st.clear();

    for (int i = n - 1; i >= 0; i--){
      st.insert(s[i]);
      v2[i] = st.size();
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++){
      ans = max(ans, v1[i] + v2[i + 1]);
    }

    cout << ans << endl;
  }
}