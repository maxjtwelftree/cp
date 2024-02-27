struct Solution {
    [[nodiscard]] int32_t diameterOfBinaryTree(TreeNode* root) {
        int32_t diameter = 0;

        function<int32_t(TreeNode*)> dfs = [&](TreeNode* node) -> int32_t {
            if (!node) return 0;
    
            int32_t leftHeight = dfs(node->left);
            int32_t rightHeight = dfs(node->right);
            
            diameter = max(diameter, leftHeight + rightHeight);
            
            return 1 + max(leftHeight, rightHeight);
        };
        
        dfs(root);
        return diameter;
    }
};