#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  for(int i = 0 ; i < t ; i++){
    long long int n; cin>>n;
    int cnt = 0;
    for(int i = 1 ; i*i <= n ; i++){
      if(n%i==0) {
        cnt++;
        if(n/i != i) { 
          cnt++;
        }
      }
    }
    if(cnt==3) {
      cout<<"YES"<<endl;
    }
    else {
      cout<<"NO"<<endl;
    }
  }
}
