#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;cin >> t;
  string pi = "314159265358979323846264338327";
  while (t--)
  {
    string s;cin>>s;
    
    int i=0;
    for(i=0;i<30;i++){
      if (pi[i] !=s[i])
      {
        break;
      }
    }
    cout << i << endl;
  }
}
