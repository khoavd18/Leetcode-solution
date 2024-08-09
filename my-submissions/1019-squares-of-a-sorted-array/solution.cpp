class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int n = nums.size();
        int i = 0;            // Con trỏ bắt đầu từ đầu mảng
        int j = n - 1;        // Con trỏ bắt đầu từ cuối mảng
        int pos = n - 1;      // Vị trí chèn kết quả từ cuối mảng
        
        std::vector<int> ans(n);  // Mảng chứa kết quả
        
        while (i <= j) {
            int leftSquare = nums[i] * nums[i];  // Tính bình phương của phần tử tại i
            int rightSquare = nums[j] * nums[j]; // Tính bình phương của phần tử tại j
            
            if (leftSquare <= rightSquare) {
                ans[pos--] = rightSquare; // Chèn phần tử bình phương lớn hơn vào mảng kết quả
                j--;  // Di chuyển con trỏ j về phía trái
            } else {
                ans[pos--] = leftSquare; // Chèn phần tử bình phương lớn hơn vào mảng kết quả
                i++;  // Di chuyển con trỏ i về phía phải
            }
        }
        
        return ans;  // Trả về mảng kết quả
    }
};
