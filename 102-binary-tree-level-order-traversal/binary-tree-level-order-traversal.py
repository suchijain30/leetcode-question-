# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        result = []
        # Handle empty tree case
        if root is None:
            return result
      
        # Initialize queue with root node for BFS
        q = deque([root])
      
        # Process tree level by level
        while q:
            current_level = []
            level_size = len(q)
          
            # Process all nodes at the current level
            for _ in range(level_size):
                # Remove node from front of queue
                node = q.popleft()
              
                # Add node value to current level list
                current_level.append(node.val)
              
                # Add children to queue for next level processing
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
          
            # Add current level to result
            result.append(current_level)
      
        return result



        
        