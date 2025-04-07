class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size()-1;i++){
            int s = target - nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(s == nums[j]) return {i,j};
            }
        }
        return {0,0};
    }
};
