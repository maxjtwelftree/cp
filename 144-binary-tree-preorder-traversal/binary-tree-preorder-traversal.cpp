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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> a;
        dfs(root, a);
        return a;
    } 
    
    void dfs(TreeNode* root, vector<int>& a) {
        if (root == nullptr) return;
        a.push_back(root -> val);
        dfs(root->left, a);
        dfs(root->right, a);        
    }
};