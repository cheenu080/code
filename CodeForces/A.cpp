# define ll long long
#define ull             unsigned long long
# define help for(auto it:v)cout<<it<<" "
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
//use M_PI for value of pi

#include<bits/stdc++.h>
using namespace std;

int main() {
	fastread();
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		ll int a, b;
		cin >> a >> b;

		if (a == b) {
			cout << 0 << endl;
		}
		else {
			ll int diff = abs(a - b);
			ll int rem = diff % 10;

			if (rem == 0) {
				cout << diff / 10 << endl;
			}
			else {
				cout << diff / 10 + 1 << endl;
			}
		}
	}
}
