# define ll long long
# define help for(auto it:v)cout<<it<<" "
//use M_PI for value of pi

class Solution {

public:
	long long int findSubarray(vector<long long int> &arr, int n ) {
		//code here
		int k = 0;
		unordered_map <int, int> mp ;
		mp[0] = 1;
		int presum = 0 ; int cnt = 0;

		for (int i = 0 ; i < n ; i++) {
			presum += arr[i];
			int remove = presum - k;
			cnt += mp[remove];
			mp[presum] += 1;
		}
		return cnt;
	}

};

//driver code is present by default
