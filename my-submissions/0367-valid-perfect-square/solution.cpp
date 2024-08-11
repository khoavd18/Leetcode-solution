class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l = 1,r = num;

        while(l<=r){
            long long m = (l+r)/2;
            long long ps = m * m;

            if(ps == num){
                return true;
            }
            else if(ps<num){
                l = m+1;
            }
            else r = m -1;
        }
        return false;
    }
};
