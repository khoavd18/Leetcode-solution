class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(auto c : strs){
            string s = c;
            sort(s.begin(),s.end());
            mp[s].push_back(c);
        }
        vector<vector<string>> res;

        for(auto c : mp){
            res.push_back(c.second);
        }
        sort(res.begin(),res.end());
        return res;
    }
};
