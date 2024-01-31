class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int a = target - num;
            if(m.find(a) != m.end()){
                return {m[a],i};
            }
            m[num] = i;
        }
        return {-1,-1};
    }
};
