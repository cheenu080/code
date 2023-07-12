#include <bits/stdc++.h>
using namespace std;
/*
  ax +by +cz = n
*/
int main(){
  int n,a,b,c;
  int x,y,z,cz;
  cin>>n>>a>>b>>c;

  int ans = 0;
  for(x=0 ; a*x<=n ; x++){
    for(y=0 ; a*x+b*y<=n ; y++){
      cz = n-(a*x + b*y);
      if(cz%c == 0){
        z = cz/c;
        ans = max(ans,x+y+z);
      }
    }
  }
  cout << ans << endl;
  return 0;

}
