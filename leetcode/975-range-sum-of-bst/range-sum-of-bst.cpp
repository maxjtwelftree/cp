struct Solution {
    void dfs(TreeNode* root, int low, int high, auto& sum) const {
        if (root == nullptr) return;
        if (root->val >= low && root->val <= high) sum += root->val;
        if (root->left != nullptr && root->val > low) dfs(root->left, low, high, sum);
        if (root->right != nullptr && root->val < high) dfs(root->right, low, high, sum);
    }

    [[nodiscard]] int rangeSumBST(TreeNode* root, int low, int high) const {
        int_least32_t sum = 0;
        dfs(root, low, high, sum);
        return sum;
    }
};