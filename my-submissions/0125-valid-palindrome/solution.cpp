class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()!=0){
            string word;
            for(int i=0;i<s.length();i++){
                if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                    word += tolower(s[i]);
                }
            }
            string word2;
            for(int i = word.length()-1;i>=0;i--){
                word2 += word[i];
            }
            if(word == word2){
                return true;
            }
            else return false;
        }
        else return true;   
    }
};
