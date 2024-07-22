/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root== NULL)
        {
            return NULL ;
        }
        //case1 p,q  in left 
        if(p->val <root->val && q->val < root->val)
        {
            TreeNode*  leftans = lowestCommonAncestor(root->left,p, q);
            return leftans ;
        }
        //case2 p q in right 
        if(p->val > root->val && q->val > root->val)
        {
            TreeNode*  rightans = lowestCommonAncestor(root->right,p, q);
            return rightans ;
        }
        // //case 3 p is left ans q in right
        // if(p->val < root->val && q->val >root->val)
        // {
        //     return root ;
        // }
        // // case4 p is in right q in left 
        // if(p->val > root->val && q->val < root->val)
        // {
        //     return root ;
        // }
        return root ;
    }
};