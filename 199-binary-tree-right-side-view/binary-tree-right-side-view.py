# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution(object):
    def rightSideView(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[int]
        """
        res = []
        if root is None:
            return res
        q =deque([root])
        while q:
            curr_level = []
            curr_length = len(q)
            for _ in range(curr_length):
                node = q.popleft()
                curr_level = node.val

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            res.append(curr_level) 
        return res


        