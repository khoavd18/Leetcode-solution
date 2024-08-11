class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> sol;

        bt(1,n,k,res,sol);
        return res;
    }
    void bt(int start,int n,int k,vector<vector<int>>& res,vector<int>& sol){
        if(sol.size() == k){
            res.push_back(sol);
        }
        for(int i=start;i<=n;i++){
            sol.push_back(i);
            bt(i+1,n,k,res,sol);
            sol.pop_back();
        }
    }
};
