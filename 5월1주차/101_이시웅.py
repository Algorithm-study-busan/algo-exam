# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool: # type: ignore
        if not root: return True
        return self.isSameTree(root.left, root.right)


    def isSameTree(self, p, q) -> bool:
        if p is None and q is None : return True
        elif p is None or q is None : return False
        return p.val == q.val and self.isSameTree(p.left, q.right) and self.isSameTree(p.right,q.left)
    

        