#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	map<string, int> userName;
	string s;
	while (n--) {
		cin >> s;
		if (userName.count(s) == 0) {
			cout << "OK" << endl;
			userName[s] = 1;//as we have counted once
		}
		else {
			cout << s << userName[s] << endl;
			userName[s] = userName[s] + 1;
		}
	}
	return 0;
}