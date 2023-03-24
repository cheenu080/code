#include <bits/stdc++.h>
using namespace std;

void printSubSeq(int index , vector<int>&ds , int arr[],int n){

  if(index==n){
    
    for(auto it:ds) cout<<it<<" ";

    if(ds.size()==0) cout<<"{}";

    cout<<endl;
    
    return;

  }
  ds.push_back(arr[index]); // 3 inserted 
  printSubSeq(index + 1, ds, arr, n); // Pick .....
  ds.pop_back();
  printSubSeq(index + 1, ds, arr, n); // notPick

}

int main(){

  int arr[]={3,1,2};
  int n=3;//no of elements
  vector<int> ds;
  
  printSubSeq(0,ds,arr,n);
  return 0;
}
