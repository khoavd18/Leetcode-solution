class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int l = 0;int r = n*m-1;

        while(l<=r){
            int mid = (l+r)/2;
            int mid_value = matrix[mid/m][mid%m];

            if(mid_value == target) return true;
            else if(mid_value < target) l = mid+1;
            else r = mid-1;
        }
        return false;
    }
};
