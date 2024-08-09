class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i =0,j=0;
        int n = word1.size();
        int m = word2.size();
        string a = "";
        while(i<n && j<m){
            if(i==j){
              a+=word1[i++]; 
            }
            else if(i>j){
                a+=word2[j++];
            }
        }
        while(i<n){
            a+=word1[i++];
        }
        while(j<m){
            a+=word2[j++];
        }
        return a;
    }
};
