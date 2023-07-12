#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve(){
    int n;cin>>n;
    string s; cin>>s;
    
    int value=0;
    if(s[0]=='1'){
        value=1;
    }
    for(int i=1;i<n;i++){
        if(s[i]=='1'){
            if(value>0){
                cout<<"-";
                value--;
            }
            else{
                cout<<"+";
                value++;
            }
        }
        else{
            cout<<"-";
        }
    }
    cout<<endl;
    return 0;
}
int main()
{
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
