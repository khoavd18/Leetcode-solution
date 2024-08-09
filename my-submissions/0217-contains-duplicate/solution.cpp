class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        bool ok = false;
        for(auto x:nums){
            mp[x]++;
        }

        for(auto x:mp){
            if(x.second > 1){
                ok = true;
                break;
            }
        }
        return ok;
    }
};
