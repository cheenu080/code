#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;cin>>n;

  set<int> s;
  for(int i = 0 ; i < n ; i++){
    int num ; cin>>num;
    s.insert(num);
  }
  int sz = s.size();
  cout<<sz<<endl;
  return 0;
}