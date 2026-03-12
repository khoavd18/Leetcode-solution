# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def generateTrees(self, n: int) -> List[Optional[TreeNode]]:
        if n==0: return []
        def build(left: int, right: int) -> List[Optional[TreeNode]]:
            if left > right:
                return [None]
            all_tree = []

            for root_val in range(left, right+1):
                left_tree = build(left, root_val-1)
                right_tree = build(root_val+1, right)
                
                for left_subtree in left_tree:
                    for right_subtree in right_tree:
                        root = TreeNode(root_val)
                        root.left = left_subtree
                        root.right = right_subtree
                        all_tree.append(root)

            return all_tree
        return build(1,n)
