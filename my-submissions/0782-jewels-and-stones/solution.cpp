class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;

        for(char c : stones){
            mp[c]++;
        } 

        int res = 0;

        for(char c : jewels){
            if(mp.find(c) != mp.end()){
                res+=mp[c];
            }
        }
        return res;
    }
};
