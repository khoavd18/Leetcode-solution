class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        unordered_map<char, int> r{
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && r[s[i]] < r[s[i + 1]]) {
                res -= r[s[i]];
            } else {
                res += r[s[i]];
            }
        }
        return res;
    }
};
