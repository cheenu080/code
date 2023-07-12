#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int cnt = 1, maxCnt = 1;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == s[i+1]) {
      cnt++;
    }
    else {
      cnt = 1;
    }
    maxCnt = max(maxCnt, cnt);
  }

  cout << maxCnt << endl;
  return 0;
}
