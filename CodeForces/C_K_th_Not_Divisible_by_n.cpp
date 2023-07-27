#define ll long long
#include<bits/stdc++.h>
using namespace std;

void solve() {

	ll int n , k ; cin >> n >> k;

	ll int div = k / (n - 1) ;
	ll int rem = k % (n - 1) ;
	ll int ans = n * div + rem ;
	if (rem == 0)
		ans -- ;
	cout << ans << endl ;
}

int main() {
	int t ; cin >> t;
	while (t--) {
		solve();
	}
}