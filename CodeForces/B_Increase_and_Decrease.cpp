#include <iostream>   
using namespace std;  

int main() {
  int t, n, sum = 0;  
  cin >> t;  
  for (int i = 0; i < t; ++i) {
    cin >> n;   
    sum += n;   
  }
  
  if (sum % t == 0) {
    cout << t << endl;  
  } 
  else {
    cout << t - 1 << endl;  
  }
  return 0;  
}
