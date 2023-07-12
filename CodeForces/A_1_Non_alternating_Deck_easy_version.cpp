#include <bits/stdc++.h>
using namespace std;

int main(){

  int t; cin>>t;
  while(t--){
    int n;cin>>n;
    
    vector<int> A;
    for (int i = 0; i <= 1000000; i++)
    {
      int piston1 = 8 * i + 1;
      A.push_back(piston1);
    }

    vector<int> B;
    for (int i = 0; i <= 1000000; i++)
    {
      int piston2 = 8 * i + 5;
      B.push_back(piston2);
    }

    for (int i = 0; i <= 1000000; i++){

      if(A[i]+B[i]==n) cout<<A[i]<<" "<<B[i]<<endl;

      else if (A[i] + B[i] < n){
        int sum = A[i] + B[i];
        A[i] = n -sum +A[i];
        cout << A[i] << " " << B[i] << endl;
      }
      else break;
    }
  }
}