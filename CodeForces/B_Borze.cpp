#include<bits/stdc++.h>
using namespace std;

int main(){

  string s;cin>>s;
  string w;
  for(int i=0;i<s.size();i++){
    if(s[i]=='.'){
		w+='0';
	}
	if(s[i]=='-'&&s[i+1]=='.'){
		w+='1';
		i++;
		
	}
	if(s[i]=='-'&&s[i+1]=='-'){
		w+='2';
		i++;
	}
  }
  cout<<w;
  return 0;
}