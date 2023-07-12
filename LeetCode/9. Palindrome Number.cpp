class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int sz = s.size();
        int start = 0;
        int end = sz - 1;
        bool flag = true;
        while (start < end) {
            if (s[start] != s[end]) {
                flag = false;
                break;
            }
            start++;
            end--;
        }
        return flag;
    }
};
-----------------------------------------
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long int reverse = 0;
        long long int temp = x;
        while (temp > 0) {
            long long int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp/10;
        }
        return (reverse == x);
    }
};
