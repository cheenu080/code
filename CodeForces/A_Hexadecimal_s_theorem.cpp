#include<bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<long long> fib;

  fib.push_back(0);
  if (n > 0)
    fib.push_back(1);

  while (fib.back() < n){

    int last_fib = fib.back();                 
    int second_last_fib = fib[fib.size() - 2]; 
    int next_fib = last_fib + second_last_fib; 
    fib.push_back(next_fib);
  
  }

  int i = 0, j = fib.size()-1;
  while (i <= j) {
    long long sum = fib[i] + fib[j];
    if (sum == n) {
      cout << fib[i] << " " << fib[i] << " " << fib[j] << endl;
      return 0;
    } 
    else if (sum < n) 
      i++;
    else j--;
  }

  cout << "I'm too stupid to solve this problem" << endl;
  return 0;
}
