#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, m, a, b;
	cin >> n >> m >> a >> b;;

	if (m * a > b) {
		int rem = (n % m) * a;
		if (rem > b) {
			int ans1 = (n / m * b + b);
			cout << ans1;
		}
		else {
			int ans2 = (n / m * b + rem);
			cout << ans2;
		}
	}
	else cout << (n * a);

	return 0;
}