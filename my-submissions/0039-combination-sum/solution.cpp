class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> current;
        backtrack(candidates, target, 0, current, res);
        return res;
    }

    void backtrack(vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& res) {
        if (target == 0) {  // Điều kiện dừng khi tổng hiện tại bằng target
            res.push_back(current);
            return;
        }
        if (target < 0) return; // Nếu tổng vượt quá target thì dừng lại

        for (int i = start; i < candidates.size(); i++) {
            current.push_back(candidates[i]);  // Chọn phần tử hiện tại
            // Gọi đệ quy với target mới (target - candidates[i]) và cho phép sử dụng lại phần tử hiện tại
            backtrack(candidates, target - candidates[i], i, current, res);
            current.pop_back();  // Loại bỏ phần tử cuối cùng để thử tổ hợp khác
        }
    }
};

