//do smth instead of nothing , stay organized , WRITE STUFF DOWN , DON'T GET STUCK ON ONE APPROACH
# define ll long long
# define help for(auto it:v)cout<<it<<" "
#include<bits/stdc++.h>
using namespace std;

int main() {
	ll int n, t, i;
	cin >> n >> t;
	vector <int> v(n);
	for (i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	if (v[t - 1] == v[t] || (t == 0 && v[0] <= 1))cout << "-1" << endl;
	else if ((t == 0 && v[0] > 1)) cout << "1" << endl;
	else cout << v[t - 1] << endl;
	return 0;
}