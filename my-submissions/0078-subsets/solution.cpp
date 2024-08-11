class Solution {
public:

    void backtracking(vector<int>& nums,int start,vector<vector<int>>& res, vector<int>& sub){
        res.push_back(sub);

        for(int i=start;i<nums.size();i++){
            sub.push_back(nums[i]);
            backtracking(nums,i+1,res,sub);
            sub.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;
        backtracking(nums,0,res,sub);
        return res;

    }
};
