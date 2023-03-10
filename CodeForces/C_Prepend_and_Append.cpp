#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;cin>>t;
  while(t--){
    int n; cin>>n;
    string s; cin>>s;
    // 2 Pointer
    int i=0; int j=n-1;
    int diff=0;
    while(i<=j){
      if(s[i]!=s[j]){
        diff+=2;
        i++;
        j--;
      }
      else break;
    }
    cout<<n-diff<<endl;
  }
}