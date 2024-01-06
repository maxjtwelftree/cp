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
struct Solution {
    int_least32_t count = 0;
    void dfs(TreeNode* root) {
        if (root) count++;
        if (root->left) dfs(root->left);
        if (root->right) dfs(root->right);
    }
    [[nodiscard]] int countNodes(TreeNode* root) {
        if (!root) return 0;
        dfs(root);
        return count;
    }
};