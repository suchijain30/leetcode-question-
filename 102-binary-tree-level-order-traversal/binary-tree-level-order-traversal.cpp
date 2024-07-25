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
    vector<vector<int>> levelOrder(TreeNode*  root) {
    vector<vector<int>> res; 
    vector<int> ans;
    if (root == NULL) {
        return res;
    }
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL); // Marker for the end of the current level
    
    while (!q.empty()) {
        TreeNode* front = q.front();
        q.pop();
        if (front == NULL) {
            // End of the current level
            res.push_back(ans);
            ans.clear();
            // If there are more nodes to process, add a new level marker
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            ans.push_back(front->val);
            if (front->left != NULL) {
                q.push(front->left);
            }
            if (front->right != NULL) {
                q.push(front->right);
            }
        }
    }

    return res;
}
};