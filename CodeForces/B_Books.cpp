//do smth instead of nothing , stay organized , WRITE STUFF DOWN , DON'T GET STUCK ON ONE APPROACH
# define ll long long
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, t;
	cin >> n >> t;
	vector<int> timeforbook(n);
	for (int i = 0; i < n; i++) {
		cin >> timeforbook[i];
	}
	int countOfBooks = 0;
	//let vallera start from here arbitary k=0
	int k = 0 ;
	int sum = 0 ;
	for (int i = 0 ; i < n ; i++) {
		sum = sum + timeforbook[i];
		if (sum <= t) {
			countOfBooks++;
		}
		else {
			sum = sum - timeforbook[k];
			k++;
		}
	}
	cout << countOfBooks;

}























// int main() {
// 	int n, t;
// 	cin >> n >> t;
// 	vector<int> v(n);
// 	for (int i = 0; i < n; i++) {
// 		cin >> v[i];
// 	}

// 	int sum = 0;
// 	int maxBooks = 0;
// 	int left = 0;

// 	for (int right = 0; right < n; right++) {
// 		sum += v[right];

// 		while (sum > t) {
// 			sum -= v[left];
// 			left++;
// 		}

// 		maxBooks = max(maxBooks, right - left + 1);
// 	}

// 	cout << maxBooks << endl;
// }
