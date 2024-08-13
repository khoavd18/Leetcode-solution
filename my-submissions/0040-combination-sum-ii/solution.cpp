class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> current;
        sort(candidates.begin(), candidates.end());  // Sắp xếp để dễ dàng bỏ qua các phần tử trùng lặp
        backtrack(candidates, target, 0, 0, current, res);
        return res;
    }

    void backtrack(vector<int>& candidates, int target, int start, int current_sum, vector<int>& current, vector<vector<int>>& res) {
        if (current_sum == target) {
            res.push_back(current);  // Nếu tổng hiện tại bằng target, đã tìm thấy tổ hợp hợp lệ
            return;
        }
        if (current_sum > target) return;  // Nếu tổng hiện tại lớn hơn target, dừng tìm kiếm

        for (int i = start; i < candidates.size(); i++) {
            // Bỏ qua các số trùng lặp để tránh tổ hợp trùng lặp
            if (i > start && candidates[i] == candidates[i - 1]) continue;

            // Nếu tổng của current_sum + candidates[i] vượt quá target, thì dừng
            if (current_sum + candidates[i] > target) break;

            current.push_back(candidates[i]);  // Thêm phần tử hiện tại vào tổ hợp
            backtrack(candidates, target, i + 1, current_sum + candidates[i], current, res);  // Gọi đệ quy với tổng hiện tại đã cập nhật
            current.pop_back();  // Bỏ phần tử cuối cùng để thử tổ hợp khác
        }
    }
};

