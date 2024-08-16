class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int i = 0,j=0;
        for(auto it : commands){
            if(it == "UP") i-=1;
            else if(it == "RIGHT") j+=1;
            else if(it == "DOWN") i+=1;
            else j-=1;
        }
        return (i*n)+j;
    }
};
