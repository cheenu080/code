#include<bits/stdc++.h>
using namespace std;
int main(){
  int ks,n,ds,points;
  cin>>ks>>n;
  vector<pair<int,int>>v;
  for(int i=0;i<n;i++){
    cin>>ds>>points;
    v.push_back(make_pair(ds,points));
  }
  sort(v.begin(),v.end());

  cout<<endl;
  for(int i=0;i<n;i++){
    if(v[i].first>=ks){
      cout<<"NO";
      return 0;
    }
    ks+=v[i].second;
  }
  cout<<"YES";
  return 0;
}