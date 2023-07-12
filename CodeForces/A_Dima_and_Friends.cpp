#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> fingers(n);
  int total_fingers = 0;

  for (int i = 0; i < n; i++) {
    cin >> fingers[i];
    total_fingers += fingers[i];
  }

  int count = 0;

  for (int i = 1; i <= 5; i++) {
    if ((total_fingers + i) % (n + 1) != 1) {
        count++;
      }
  }

  cout << count << endl;

  return 0;
}
