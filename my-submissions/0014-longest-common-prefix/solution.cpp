class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
        string ans = "";
  
        for(int i=0;i<a[0].size();i++){
            char x = a[0][i];
            for(int j=1;j<a.size();j++){
                if(a[j][i] != x){
                    return ans;
                }
            }
            ans+=x;
        }
        return ans;
    }
};
