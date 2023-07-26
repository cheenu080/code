#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int cntOdd = 0 , cntEve = 0;
	vector<int> v;
	for (int i = 0; i < n ; i++) {
		int num ; cin >> num;
		v.push_back(num);
		if (num % 2 == 0)cntEve++;
		else cntOdd++;
	}
	int eve = 0;
	for (int i = 0 ; i < n; i++) {
		if (v[i] % 2 == 0) {eve = i + 1; break;}
	}
	int odd = 0;
	for (int i = 0 ; i < n; i++) {
		if (v[i] % 2 != 0) {odd = i + 1; break;}
	}
	if (cntEve > cntOdd) {
		cout << odd;
	}
	else {
		cout << eve;
	}
}