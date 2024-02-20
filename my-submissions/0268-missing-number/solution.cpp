class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for (int i = 0; i <= n; ++i) {
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                return i;
            }
        }
        return -1;
    }
};
