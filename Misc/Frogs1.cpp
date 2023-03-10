#include <bits/stdc++.h>
using namespace std;

/*
APPROACH
We know that at the end we need the value of (N-1) & (N-2)
*/
vector<int> h;
int main(){
  int N;
  cin >> N;
  h.resize(N);
  for (int i = 0; i < N; i++){
    cin >> h[i];
  }

  int previous_to_previous = 0;
  int previous=abs(h[1]-h[0]);

  for( int i=2 ; i<N ; i++ ){
    int first_jump = previous + abs(h[i] - h[i-1]);
    int second_jump = previous_to_previous+ abs(h[i] - h[i-2]);

    previous_to_previous = previous;
    previous = min(first_jump,second_jump); 
  }

  cout<<previous<<endl;
  return 0;
}
