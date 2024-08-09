class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int res = nums[0];
        for(int i=1;i<nums.size();i++){
            if (abs(nums[i]) < abs(res) || (abs(nums[i]) == abs(res) && nums[i] > res)) {
                res = nums[i];
            } 
        }
        return res;
    }
};
