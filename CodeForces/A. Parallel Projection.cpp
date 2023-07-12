#include<bits/stdc++.h>
using namespace std;

int main(){
		
	int t; cin>>t;
	while(t--){
		
		int w,d,h;
		cin>>w>>d>>h;
		
		int a,b,f,g;
		cin>>a>>b>>f>>g;
		int ans,ans1,ans2,ans3,ans4;
		ans = h;
		ans1 = w-a +w-f +abs(b-g);
		ans2 = a+f +abs(b-g);
		ans3 = b+g +abs(f-a);
		ans4 = d-b +d-g + abs(f-a);
		
		cout<<ans+min(min(ans1,ans2),min(ans3,ans4))<<endl;
		
	}
}
