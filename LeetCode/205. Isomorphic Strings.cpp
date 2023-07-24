class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int map_s[256] = {0}, map_t[256] = {0}, n = s.size();
        for (int i = 0; i < n; ++i) {
            if (map_s[s[i]] != map_t[t[i]]) return false;
            map_s[s[i]] = i + 1;
            map_t[t[i]] = i + 1;
        }
        return true;
    }
};

