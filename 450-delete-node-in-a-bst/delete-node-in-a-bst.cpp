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
TreeNode* minvalue(TreeNode* root)
{
    TreeNode* temp = root ;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp ;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        {
            return NULL ;
        }
        if(root->val == key)
        {
            // 4 cases 
            //case1 if both left and right are null
            if(root->left == NULL && root->right == NULL)
            {
                delete root ;
                return NULL ;
            }
            //case 2 if left is not null and right in  null
            else if(root->left != NULL && root->right == NULL)
            {
                TreeNode* childsubtee = root->left ;
                delete root ;
                return childsubtee;
            }
            //case 3 if left is nnull and right in not null
            else if(root->left == NULL && root->right != NULL)
            {
                TreeNode* childsubtee = root->right ;
                delete root ;
                return childsubtee;
            }
            //case 4 both are not null
            // if(root->left != NULL && root->right != NULL)
            else
            {
                // max value from left subtree or min value from right subtree
                TreeNode* maxi = minvalue(root->right);
                root->val = maxi->val ;
                //delete actual maxi 
                root->right = deleteNode(root->right, maxi->val);
                return root ;
            }
        }
        else if(root->val > key)
        {
            root->left = deleteNode(root->left, key); // giving updated tree 
        }
        else
        {
            root->right = deleteNode(root->right, key);
        }
        return root ;
    }
};