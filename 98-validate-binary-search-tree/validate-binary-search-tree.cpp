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
bool bst(TreeNode* root , long long int uperbound , long long int lowerbound)
{
    if(root==NULL)
    {
        return true ;
    }
    bool cond1 = root->val > lowerbound;
    bool cond2 = root->val < uperbound ;
    bool leftans = bst(root->left , root->val , lowerbound);
    bool rightans = bst(root->right, uperbound , root->val);
    if(cond1 && cond2 && leftans && rightans)
    {
        return true ;
    }
    return  false ;
}
    bool isValidBST(TreeNode* root) {
        long long int lowerbound = -2147483947 ;
        long long int uperbound = 2147483847 ;
        bool ans = bst(root , uperbound , lowerbound);
        return ans ;
    }
};