#include<bits/stdc++.h>
using namespace std;

int divisors(int n) {
  int cnt = 0;
  for(int i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      cnt += 2;
      if(i * i == n) cnt--;
    }
  }
  return cnt;
}

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  
  vector<int> v1{a, b, c};
  vector<int> v2{1, 1, 1};
  
  int sum = 0;
  while(v1 != v2) {
    sum += divisors(v2[0] * v2[1] * v2[2]);
    if(v2[0] < v1[0]) {
      v2[0]++;
    } 
    else if(v2[1] < v1[1]) {
      v2[1]++;
      v2[0] = 1;
    } 
    else {
      v2[2]++;
      v2[0] = 1;
      v2[1] = 1;
    }
  }
  sum += divisors(v2[0] * v2[1] * v2[2]);
  cout << sum << endl;
  return 0;
}

