#include<bits/stdc++.h>
using namespace std;

int main(){

  int n, m;
  ifstream fin("input.txt");
  ofstream fout("output.txt");

  fin >> n >> m;
  
  int diff = abs(n-m);
  int sz = n+m-diff;

  vector <char> v1;
  vector <char> v;
  for(int i=0;i<sz/2;i++){ 
    v.push_back('B');
    v.push_back('G');
    v1.push_back(v[2*i]);
    v1.push_back(v[2*i+1]);
  }
  vector <char> v2;
  if(n>m){
    for(int i=0;i<diff;i++){
      v2.push_back('B');
    }
  }
  else if (n<m){
    for(int i=0;i<diff;i++){
      v2.push_back('G');
    }
  }
  v1.insert(v1.end(), v2.begin(), v2.end());
  for(auto it: v1) fout << it;
  
  fin.close();
  fout.close();
  
  return 0;
}
