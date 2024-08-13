class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jump = 0;
        int cr = 0;
        int fast = 0;
        if(n==1) return 0;
        for(int i=0;i<n;i++){
            fast = max(fast,i+nums[i]);

            if(i==cr){
                jump++;
                cr = fast;

                if(cr >= n-1){
                    break;
                }
            }
        }
        return jump;
    }
};
