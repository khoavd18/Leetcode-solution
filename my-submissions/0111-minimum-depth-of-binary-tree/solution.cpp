/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0; // Nếu cây rỗng, trả về 0

        // Nếu cây chỉ có nhánh phải, ta chỉ tính độ sâu của nhánh phải
        if (!root->left) return minDepth(root->right) + 1;
        // Nếu cây chỉ có nhánh trái, ta chỉ tính độ sâu của nhánh trái
        if (!root->right) return minDepth(root->left) + 1;

        // Nếu cả hai nhánh đều tồn tại, ta chọn độ sâu nhỏ hơn giữa hai nhánh
        return min(minDepth(root->left), minDepth(root->right)) + 1;
    }
};

