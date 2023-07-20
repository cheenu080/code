class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int sum1 = 0;
        for(int i=0; i<nums.size() ; i++){
            sum1 = sum1+nums[i];
        }
        int n = nums.size();
        int sum2 = n*n+n;
        int ans = sum2/2;

        return ans-sum1;
    }
};

------------------------------------------
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        int i=0;
        
        for(int num:nums){
            result ^= num;
            result ^= i;
            i++;
        }
        
        return result;
    }
};
