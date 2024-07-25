class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = height.size()-1;
        int max1 = INT_MIN;
        while(l<r){
            max1 = max(max1,(r-l)*min(height[l],height[r]));
            if(height[l] > height[r]) r--;
            else l++;
        }
        return max1;
    }
};
