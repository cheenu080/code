#include <bits/stdc++.h>
int getLongestSubarray(vector<int>& nums, int k) {
    map<int, int> presum;
    long long sum = 0 ;

    int maxlen = 0;

    for (int i = 0 ; i < nums.size() ; i++) {
        sum = sum + nums[i];

        if (sum == k) {
            maxlen = max(maxlen, i + 1);
        }

        long long rem = sum - k ;

        if (presum.find(rem) != presum.end()) {
            int len = i - presum[rem];
            maxlen = max(maxlen, len);
        }

        if (presum.find(sum) == presum.end()) {
            presum[sum] = i;
        }
    }
    return maxlen;
}
