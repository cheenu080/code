#include<bits/stdc++.h>
using namespace std;

int main(){

  int t; while(t--){

    int n,m;
    cin>>n>>m;

    string s1,s2;
    cin>>s1>>s2;
    reverse(s1.begin(),s2.end());
    s2=s1+s2;
    
    int count=0;
    for (int i=0 ; i<n+m ;i++){
      if(s2[i]==s2[i+1]){
        count++;
      }
    }
    if(count>1)cout<<"NO";
    else cout<<"YES";

    
  }
}