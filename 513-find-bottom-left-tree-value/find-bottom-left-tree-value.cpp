struct Solution {
    int findBottomLeftValue(TreeNode* root) {
        int max_tacker = -1;
        int return_val = 0;

        function<void(TreeNode*, int)> dfs = [&](TreeNode* node, int tacker) -> void {            
            if (!node) return;
            if (tacker > max_tacker) {
                max_tacker = tacker;
                return_val = node->val;
            }
            dfs(node->left, tacker + 1); 
            dfs(node->right, tacker + 1);
        };

        dfs(root, 0);
        return return_val;
    }
};