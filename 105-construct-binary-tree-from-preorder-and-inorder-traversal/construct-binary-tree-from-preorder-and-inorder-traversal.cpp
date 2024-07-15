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
int search(vector<int>& inorder, int target)
{
for(int i=0 ; i<inorder.size(); i++)
{
    if(inorder[i]== target)
    {
        return i ;
    }
}
return -1 ;
}
TreeNode* Tree(vector<int>& preorder, vector<int>& inorder, int &preindex, int inorderstart,int inorederend , int size  )
{
    if(preindex > size || inorderstart >inorederend  )
    {
        return NULL ;
    }
    int element = preorder[preindex];
    preindex++ ;
    TreeNode* root = new TreeNode(element);

    int postion = search(inorder,  element);

    root->left = Tree(preorder,inorder,preindex, inorderstart, postion-1 , size);
    root->right = Tree(preorder,inorder,preindex, postion+1 ,inorederend  , size);

    return root ;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // pre - nlr  && in- lnr 
        int preindex =0 ;
        int inorderstart =0 ;
        int inorederend = inorder.size()-1 ;
        int size = inorder.size();
        TreeNode* ans = Tree(preorder, inorder, preindex,inorderstart, inorederend , size  );
        return ans ;

    }
};