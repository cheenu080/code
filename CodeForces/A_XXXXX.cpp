# define ll long long
# define help for(auto it:v)cout<<it<<" "
//use M_PI for value of pi

#include<bits/stdc++.h>
using namespace std;

int main() {

	int t; cin >> t;

	while (t--) {
		int n , k ;
		cin >> n >> k;

		vector<int> v(n);
		int sum = 0;
		for (int i = 0 ; i < n ; i++) {
			cin >> v[i];
			sum += v[i];
		}
		int front = 0 ; int back = 0;

		while ((back < n) && v[n - back - 1] % k == 0) {
			back++;
		}
		while (front < n && v[front] % k == 0) {
			front++;
		}
		if (sum % k != 0) {
			cout << n << endl;
		}

		else cout << (n - min(front, back) - 1) << endl;


	}
	return 0;
}