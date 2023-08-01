# define ll long long
# define ull unsigned long long
# define help for(auto it:v)cout<<it<<" "
# define fastread()  (ios_base:: sync_with_stdio(false),cin.tie(NULL))
//use M_PI for value of pi

#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	string s ; cin >> s;

	int ans = n - 1;
	for (int i = 1; i + 1 < n; ++i) {
		if (s[i - 1] == s[i + 1]) {
			ans--;
		}
	}
	cout << ans << endl;
}

int main() {
	fastread();

	int t ;
	cin >> t;
	while (t--) {
		solve();
	}

}

