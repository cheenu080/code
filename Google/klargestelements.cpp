# define ll long long
# define help for(auto it:v)cout<<it<<" "
//use M_PI for value of pi

class Solution {
public:
	vector<int> kLargest(int arr[], int n, int k) {
		sort(arr, arr + n, greater<int>());

		vector<int> v;
		for (int i = 0; i < k; i++) {
			v.push_back(arr[i]);
		}
		return v;
	}
};


//driver code is present by default
