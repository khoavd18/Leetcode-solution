class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        // Duyệt qua từng ô trên bảng
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;  // Nếu không tìm thấy từ
    }
    
    bool dfs(vector<vector<char>>& board, string& word, int i, int j, int idx) {
        // Nếu đã tìm thấy hết từ
        if (idx == word.length()) return true;
        
        // Kiểm tra điều kiện trong lưới và ký tự
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[idx]) {
            return false;
        }
        
        // Đánh dấu ô đã duyệt bằng cách tạm thời thay đổi giá trị
        char temp = board[i][j];
        board[i][j] = '#';
        
        // Duyệt theo 4 hướng: lên, xuống, trái, phải
        bool found = dfs(board, word, i - 1, j, idx + 1) ||  // Lên
                     dfs(board, word, i + 1, j, idx + 1) ||  // Xuống
                     dfs(board, word, i, j - 1, idx + 1) ||  // Trái
                     dfs(board, word, i, j + 1, idx + 1);    // Phải
        
        // Quay lui (backtrack): khôi phục lại ô đã duyệt
        board[i][j] = temp;
        
        return found;
    }
};

