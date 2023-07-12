#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  bool flag=true; // true cause we assume the string is already a magic number

  for(int i=0;i<s.size();){
    if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4') i=i+3;
    else if(s[i]=='1' && s[i+1]=='4' )          i=i+2;
    else if(s[i]=='1' && i<s.size())            i=i+1;
    else {
      flag = false;
      break;
    }
  }
  if (flag) cout<<"YES";
  else cout<<"NO";
  return 0;
}
