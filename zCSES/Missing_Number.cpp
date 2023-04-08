#include <bits/stdc++.h>
using namespace std;

int main(){

  int n ; cin >> n ;

  int sum1 = 0 ; 
  for (int i = 1 ; i <= n ; i++){
    sum1 = sum1 + i;
  }
  vector <int> v(n-1);
  for(int i = 0 ; i  < n-1 ;i++){
    cin>>v[i];
  }

  int sum2 = 0;
  for(int i = 0 ; i < n-1 ; i++){
    sum2 += v[i];
  }

  cout<<sum1-sum2;
  return 0;
}