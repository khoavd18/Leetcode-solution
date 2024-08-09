class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        map<int,int> mp;

        for(int x : nums){
            mp[x]++;
            if(mp[x]>n/2) return x;
        }
        return -1;
    }
};
