#include<bits/stdc++.h>
using namespace std;

int main() {
    char s[101];
    cin >> s;
    int len = strlen(s);
    int uc = 0, lc = 0;
    for (int i = 0; i < len; i++) {
        if (isupper(s[i])) {
            uc++;
        } else {
            lc++;
        }
    }
    if (uc > lc) {
      for (int i = 0; i < len; i++) {
          s[i] = toupper(s[i]);
      }
    } 
    else {
      for (int i = 0; i < len; i++) {
          s[i] = tolower(s[i]);
      }
    }
    cout << s << endl;
    return 0;
}
