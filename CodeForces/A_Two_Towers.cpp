#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    reverse(t.begin(),t.end());
    s+=t;
    //cout<<s<<endl;
    int cnt=0;
    for(int i=0;i<n+m;i++){
      if(s[i]==s[i+1]) cnt++;
    }
    if(cnt>1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

  }
  return 0;
}