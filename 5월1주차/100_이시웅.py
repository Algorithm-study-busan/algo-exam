# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool: # type: ignore
        if not p and not q : return True 
        # 비교중인 두 노드가 둘다 none이면 결국 같은거
        elif (p and (not q)) or ((not p)and q) : return False
        # 비교중인 두 노드가 exclusiveOR이면 이건 다른거
        
        return p.val == q.val and self.isSameTree(p.left, q.left) and self.isSameTree(p.right,q.right)
        