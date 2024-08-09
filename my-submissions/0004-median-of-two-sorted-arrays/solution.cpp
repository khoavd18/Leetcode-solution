class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int k = 0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> res(n+m);
        while(i<n && j<m){
            if(nums1[i] < nums2[j]){
                res[k++] = nums1[i++];
            }
            else res[k++] = nums2[j++];
        }
        while(i<n) res[k++] = nums1[i++];
        while(j<m) res[k++] = nums2[j++];

        double tol;
        int size = res.size();
        if(size % 2 != 0) {
            tol = res[size / 2];  // Khi kích thước mảng là lẻ, median là phần tử ở giữa
        }
        else {
            tol = (res[size / 2 - 1] + res[size / 2]) / 2.0;  // Khi kích thước mảng là chẵn, median là trung bình của hai phần tử ở giữa
        }

        return tol;
    }
};
