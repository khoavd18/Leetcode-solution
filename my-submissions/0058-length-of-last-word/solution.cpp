class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string tmp;
        string a;
        while(ss>>tmp){
            a = tmp;
        }
        return a.length();
    }
};
