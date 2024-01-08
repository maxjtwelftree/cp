struct Solution {
    void dfs(TreeNode* root, int low, int high, auto& sum) {
        if (root == nullptr) return;
        if (root->val >= low && root->val <= high) sum += root->val;
        if (root->left != nullptr && root->val > low) dfs(root->left, low, high, sum);
        if (root->right != nullptr && root->val < high) dfs(root->right, low, high, sum);
    }
    
    [[nodiscard]] int rangeSumBST(TreeNode* root, int low, int high) {
        auto sum = 0;
        dfs(root, low, high, sum);
        return sum;
    }
};