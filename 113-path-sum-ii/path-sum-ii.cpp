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

 void sumpath(TreeNode* root, int targetSum, int sum, vector<int>ans , vector<vector<int>>&res)
{
    if(root==NULL)
    {
        return  ;
    }
    sum = sum+ root->val ;
    ans.push_back(root->val);
    if(root->left == NULL && root->right == NULL )
    {
        if(sum== targetSum)
        {
            res.push_back(ans);
        }
        else
        {
            return ;
        }
    }
    sumpath(root->left, targetSum, sum, ans , res);
    sumpath(root->right, targetSum, sum, ans , res) ;
    // return res ;
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum =0 ;
        vector<int>ans ;
        vector<vector<int>>res;
        sumpath(root, targetSum,  sum , ans ,res) ;
        return res;
    }
};