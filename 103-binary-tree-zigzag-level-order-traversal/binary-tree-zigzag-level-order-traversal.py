# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        res = []
        if root is None:
            return res
        level = 1
        q = deque([root]) #level 1 done odd
        while q:
            curr_level=[]
            curr_length = len(q)
            for _ in range(curr_length):
                node =q.popleft()
                curr_level.append(node.val)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            
            if level%2==0:
                res.append(curr_level[::-1])
            else:
                res.append(curr_level)

            level +=1
        return res
                
