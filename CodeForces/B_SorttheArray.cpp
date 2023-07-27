#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v1, v2;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v1.push_back(a);
		v2.push_back(a);
	}

	sort(v2.begin(), v2.end());

	int count = 0;
	int firstDiffPos = -1, lastDiffPos = -1;

	for (int i = 0; i < n; i++) {
		if (v1[i] != v2[i]) {
			count++;
			if (firstDiffPos == -1)
				firstDiffPos = i;
			lastDiffPos = i;
		}
	}

	if (count <= 2) {
		cout << "yes" << endl;
		if (firstDiffPos == -1) {
			// Array is already sorted
			cout << "1 1" << endl;
		}
		else {
			// Add 1 to indices to make them 1-based
			cout << (firstDiffPos + 1) << " " << (lastDiffPos + 1) << endl;
		}
	}
	else {
		reverse(v1.begin() + firstDiffPos, v1.begin() + lastDiffPos + 1);
		if (v1 == v2) {
			cout << "yes" << endl;
			cout << (firstDiffPos + 1) << " " << (lastDiffPos + 1) << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
}
//     if (firstDiffPos == -1) firstDiffPos = i;: If the firstDiffPos variable is still set to its initial value of -1, it means we haven't found the position of the first difference yet. In this case, the current value of i is assigned to firstDiffPos, indicating the position of the first difference between the two arrays.

//     lastDiffPos = i;: As the loop iterates, this line updates the value of lastDiffPos with the current value of i. So, when the loop finishes, lastDiffPos will hold the position of the last difference found between the two arrays.

// 	   After the loop finishes, the variables count, firstDiffPos, and lastDiffPos will contain the following information:

//     count: The total number of positions where the elements in v1 and v2 are different.
//     firstDiffPos: The index of the first position where the elements in v1 and v2 are different. If no differences are found, this value will remain as -1.
//     lastDiffPos: The index of the last position where the elements in v1 and v2 are different. If no differences are found, this value will also remain as -1.