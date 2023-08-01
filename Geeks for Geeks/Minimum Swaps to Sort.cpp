# define ll long long
# define help for(auto it:v)cout<<it<<" "
//use M_PI for value of pi

class Solution {
public:
	int minSwaps(vector<int>& nums) {
		// code here
		vector<pair<int, int>> vp(nums.size());
		for (int i = 0; i < nums.size(); i++) {
			vp[i] = {nums[i], i};
		}
		sort(vp.begin(), vp.end());

		int cnt = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (vp[i].second == i) continue;
			else {
				cnt++;
				swap(vp[i], vp[vp[i].second]);
				i--;
			}
		}
		return cnt;
	}
};

//driver code is present by default
