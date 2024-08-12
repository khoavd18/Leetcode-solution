class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.empty()) return ans;
        unordered_map<char,string> mp = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"},
            {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };
        string path;
        bt(digits, 0, path, mp, ans);
        return ans;
    }
    void bt(const string& digits, int index, string& path,
                   const unordered_map<char, string>& mp,
                   vector<string>& ans) {
        if(index == digits.size()){
            ans.push_back(path);
            return;
        }
        const string& letters = mp.at(digits[index]);
        for (char letter : letters) {
            path.push_back(letter);
            bt(digits, index + 1, path, mp, ans);
            path.pop_back();
        }
    }
};
