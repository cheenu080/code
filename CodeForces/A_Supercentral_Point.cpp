#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x[1000],y[1000],t;
  bool upper[201]={false},lower[201]={false},left[201]={false},right[201]={false};
  cin>>t;
  for(int i=0;i<t;i++){
      cin>>x[i]>>y[i];
  }
  for(int i=0;i<t;i++){
    for(int j=0;j<t;j++){
      if(x[i]==x[j] && y[i]<y[j]) upper[i]=true;
      else if(x[i]==x[j] && y[i]>y[j]) lower[i]=true;
      else if(x[i]<x[j] && y[i]==y[j]) right[i]=true;
      else if(x[i]>x[j] && y[i]==y[j]) left[i]=true;      
    }
  }
  int count=0;
  for(int i=0;i<t;i++){
    if (lower[i] && upper[i] && right[i] && left[i])
      count++;
  }
  cout << count;
  return 0;
}