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
int height(TreeNode* root)
{
    if(root == NULL)
    {
        return 0 ;
    }
    int lefth = height(root->left);
    int righth = height(root->right);
    int ans = max(lefth , righth)+1;
    return ans ;
}
    bool isBalanced(TreeNode* root) {
        int a ;
        if(root == NULL)
        {
            return true ;
        }
        int leftheight = height(root->left);
        int rightheight = height(root->right);
        int balance = abs(leftheight-rightheight);

        bool curr = (balance<=1);

        int rans = isBalanced(root->left);
        int lans = isBalanced(root->right);  // checking tree is balanced or not 

        if(curr && rans && lans)
        {
            return true ;
        }
        else
        {
            return false ;
        }
    }
};