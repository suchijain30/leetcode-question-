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
void view(TreeNode* root ,vector<int>&rightview, int level )
{
    if(root==NULL)
    {
        return ;
    }
    if(rightview.size()== level)
    {
        rightview.push_back(root->val);
    }
    view( root->right ,rightview, level+1 );
    view(root->left ,rightview, level+1 );
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>rightview ;
        int level =0 ;
        view( root ,rightview, level );
        return rightview ;
    }
};