class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ans;
        vector<string> v;
        while(ss>>ans){
            v.push_back(ans);
        }
        string res = "";
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            res+=v[i];
            if(i!=v.size()-1) res+=" ";
        }
        return res;
    }
};
