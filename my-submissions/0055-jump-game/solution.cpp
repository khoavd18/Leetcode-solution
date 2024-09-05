class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_r = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i>max_r) return false;
            max_r = max(max_r,i+nums[i]);
        }
        return true;
    }
};
