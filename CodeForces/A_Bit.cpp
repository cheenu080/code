#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;cin>>t;
  int count = 0;
  while(t--){
    string s;cin>>s;

    if(s[0]=='X' && s[1]=='+') count++;
    if(s[0]=='-') --count;
    if(s[0]=='+') ++count;
    if(s[0]=='X' && s[1]=='-') count--;
  
  }
  cout<<count;
}