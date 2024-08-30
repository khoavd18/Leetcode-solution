class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int sum = nums[0] + nums[1] + nums[2];
        for(int i=0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int l = i+1,r= n-1;

            while(l<r){
                int cur = nums[i] + nums[l] + nums[r];

                if(abs(cur-target) < abs(sum-target)) sum = cur;

                if(cur == target) return cur;
                else if(cur < target){
                    l++;
                }
                else r--;
            }
        }
        return sum;
    }
};
