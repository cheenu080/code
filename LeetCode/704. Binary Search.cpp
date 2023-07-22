class Solution
{
public:
  int search(vector<int> &nums, int target, int s, int e){
    if (s <= e){
      int mid = (s + e) / 2;

      if (nums[mid] == target)
        return mid;
      else if (target > nums[mid])
        return search(nums, target, mid + 1, e);
      else
        return search(nums, target, s, mid - 1);
    }
    return -1;
  }
};
---------------------------------------------------------
class Solution{
public:
  int search(vector<int> &nums, int target){
      return help(0,nums.size()-1,nums,target);
  }
  

  int help(int s ,int e , vector <int>nums , int target){
    if (s <= e)  {
      int mid = (s + e) / 2;
      if (nums[mid] == target)
        return mid;
      else if (target > nums[mid])
        return help(mid + 1, e, nums, target);
      else
        return help(s, mid - 1 ,nums, target);
    }
    return -1;
  }
};
---------------------------------------------------------------
class Solution{
public:
    int search(vector<int>& nums,int target) {
        int n = nums.size()-1;
        int low = 0, high = n;
        while( low <= high){
            int mid = low + (high-low)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) high = mid -1;
            else low = mid + 1;
        }
        return -1;
  }
};
-----------------------------------------------------------------