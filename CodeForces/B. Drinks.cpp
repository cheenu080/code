#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n ; cin>> n;
	
	int sum = 0 ; 
	for(int i = 0 ; i < n ; i++){
		int p;
		cin>>p;
		sum = sum +p;
	}
	double mul = 100*n;
	double ans = sum/mul;
	cout<<ans*100<<endl;
	
}
