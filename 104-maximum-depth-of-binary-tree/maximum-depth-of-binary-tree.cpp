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
    int maxDepth(TreeNode* root) {
        // if(root ==NULL)
        // {
        //     return 0 ;
        // }
        // int lefth = maxDepth(root->left);
        // int righth = maxDepth(root->right);

        // int height = max(lefth, righth) +1 ;
        // return height;


        if(root == NULL)
        {
            return 0 ;
        }
        queue<TreeNode*>q ;
        q.push(root);
        q.push(NULL);      // jitne null utne level 
        int count =1 ;     // jitne level utni height 
        while(!q.empty())
        {
            TreeNode* front = q.front();
            q.pop();
            if(front==NULL)
            {
                cout<<endl;
                if(!q.empty()) 
                {
                count++ ;
                q.push(NULL);
                }
                
            }
            else
            {
            if(front->left!= NULL)
            {
                q.push(front->left);
                // countleft++ ;
            }
            if(front->right !=NULL)
            {
                q.push(front->right);
                // countright++ ;
            }
            }
        }
        return count ;
    }
};