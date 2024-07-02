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
    int height(TreeNode* root) {
        if(root ==NULL)
        {
            return 0 ;
        }
        int lefth = height(root->left);
        int righth = height(root->right);

        int h = max(lefth, righth) +1 ;
        return h;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
            return 0 ;
        }

        //option 1 both node are in left subtree 
        int option1 = diameterOfBinaryTree(root->left);

        //option 2 both node are in right subtree
        int option2 = diameterOfBinaryTree(root->right);

        // option 3 onr child is in right and another is in left 
        int option3 = height(root->left) + height(root->right);
        
        int dis = max(option1 , max(option2 , option3));
        return dis ;  
    }
};