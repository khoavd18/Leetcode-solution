class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int n = nums.size();
        int c = nums[0];
        for(int i=1;i<n;i++){
            c = max(nums[i],nums[i]+c);
            max_sum = max(max_sum,c);
        }
        return max_sum;
    }
};
