#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;

    int sameDiff =abs(a1-a4)+1;
    int adjDiff = 2 *(abs(a2-a3));

    if (a1==0 && a2==0 &&a3==0 && a4!=0){
      cout << 1 << endl;
    }
    else if (a1!=0 && a2==0 &&a3==0 && a4==0){
      cout << a1 << endl;
    }
    else if (a1!=0 && a2==0 &&a3==0 && a4!=0){
      if(a1>=a4){cout<<a1+a4<<endl;}
      else{cout<<2*abs(a1-a4)-1<<endl;}
    }
    else{
      cout << sameDiff+adjDiff << endl;
    }


  }
}