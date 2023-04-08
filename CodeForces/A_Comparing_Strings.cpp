#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s1, s2;
  cin >> s1 >> s2;

  if (s1.size() != s2.size()){
    cout << "NO" << endl;
    return 0;
  }

  int pos1 = -1, pos2 = -1, diff_count = 0;
  for (int i = 0; i < s1.size(); i++){
    if (s1[i] != s2[i]) {
      if (pos1 == -1){
        pos1 = i;
      }
      else if (pos2 == -1){
        pos2 = i;
      }
      diff_count++;
    }
  }

  if (diff_count == 2){
    if (s1[pos1] == s2[pos2] && s1[pos2] == s2[pos1]){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
