#define ll long long
#define ull unsigned long long
#define help for(auto it:v) cout << it << " "
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL))

#include<bits/stdc++.h>
using namespace std;

int solve() {
	int n; cin >> n;
	int k; cin >> k;
	map<ll, ll> mp;

	vector<ll> a(n);
	int zero = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		int z = a[i] % k;
		if (z == 0) zero++;
		else {
			z = k - z;
			mp[z]++;
		}
	}
	ll maxi = 0;
	if (zero == n) {
		cout << 0 << endl;
		return 0;
	}
	for (auto it : mp) {
		if (it.first == 0) continue;
		else {
			ll z = it.first;
			if (it.second >= 1) {
				z = z + (it.second - 1) * k;
			}
			maxi = max(maxi, z);
		}
	}
	cout << maxi + 1 << endl;
	return 0;
}

int main() {
	fastread();
	int t; cin >> t;
	while (t--) {
		solve();
	}
}
