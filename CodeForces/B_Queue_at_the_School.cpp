#include<bits/stdc++.h>
using namespace std;
int main()
{
  int size, trial;
  cin >> size >> trial;
  string s;cin>>s;

  while (trial--){
    for (int i = 1; i < size; i++){
      if (s[i-1] == 'B' && s[i] == 'G' ){
        s[i-1] = 'G';
        s[i] = 'B';
        i++;
      }
    }
  }
  cout << s << endl;
  return 0;
}