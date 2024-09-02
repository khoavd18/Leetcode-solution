class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        unordered_map<char,int> mp = {{'a',1},{'b',2},{'c',3},{'d',4},{'e',5},{'f',6},{'g',7},{'h',8}};
        int c1,c2;
        if(mp[coordinate1[0]]%2!=0 && coordinate1[1]%2!=0){
            c1 = 0;
        }
        else if(mp[coordinate1[0]]%2!=0 && coordinate1[1]%2==0){
            c1 = 1;
        }
        else if(mp[coordinate1[0]]%2==0 && coordinate1[1]%2==0){
            c1 = 0;
        }
        else c1 = 1;

        if(mp[coordinate2[0]]%2!=0 && coordinate2[1]%2!=0){
            c2 = 0;
        }
        else if(mp[coordinate2[0]]%2!=0 && coordinate2[1]%2==0){
            c2 = 1;
        }
        else if(mp[coordinate2[0]]%2==0 && coordinate2[1]%2==0){
            c2 = 0;
        }
        else c2 = 1;
        
        return c1 == c2;
    }
};
