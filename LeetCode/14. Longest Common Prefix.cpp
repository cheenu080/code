/* O(n*m) */
class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }
    string prefix = "";
    int minLen = INT_MAX;
    for (int i = 0; i < strs.size(); i++) {
        if (strs[i].size() < minLen) {
            minLen = strs[i].size();
        }
    }
    for (int i = 0; i < minLen; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strs.size(); j++) {
            if (strs[j][i] != c) {
                return prefix;
            }
        }
        prefix += c;
    }
    return prefix;
}
};
/*Binary Search - nlogn*/
class Solution {
public:
bool isCommonPrefix(const vector<string>& strs, int len) {
    string prefix = strs[0].substr(0, len);
    for (int i = 1; i < strs.size(); i++) {
        if (strs[i].substr(0, len) != prefix) {
            return false;
        }
    }
    return true;
}
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }
    
    int minLength = INT_MAX;
    for (int i = 0; i < strs.size(); i++) {
        int len = strs[i].length();
        if (len < minLength) {
            minLength = len;
        }
    }

    
    int start = 1, end = minLength;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (isCommonPrefix(strs, mid)) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return strs[0].substr(0, (start + end) / 2);
}
};
/*Sort the input array-nmlogn*/
class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }
    sort(strs.begin(), strs.end());
    string prefix = strs.front();
    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            prefix.pop_back();
            if (prefix.empty()) {
                return "";
            }
        }
    }
    return prefix;
    }
};

/*-----------------------------------------------*/
