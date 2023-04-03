class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanNumerals = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int result = 0;
        int previous = 0;
        
        for (int i = s.size()-1; i >= 0; i--) {
            int current = romanNumerals[s[i]];
            if (current < previous) {
                result = result - current;
            } 
            else {
                result =result + current;
            }
            previous = current;
        }
        
        return result;
    }
};
