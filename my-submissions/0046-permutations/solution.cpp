class Solution {
public:
    void bt(vector<int>& nums,vector<vector<int>>& res,vector<int>& sol,vector<bool>& used){
        if (sol.size() == nums.size()) {
            res.push_back(sol);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            sol.push_back(nums[i]);
            used[i] = true;
            bt(nums,res,sol,used);
            sol.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sol;

        vector<bool> used(nums.size(),false);
        bt(nums,res,sol,used);
        return res;
    }
};
