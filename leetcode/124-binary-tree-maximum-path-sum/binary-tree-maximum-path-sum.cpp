class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int32_t max_sum = INT_MIN;

        function<int(TreeNode*, int32_t&)> dfs = [&](TreeNode* root, auto& max_sum) {
            if (root == nullptr) return 0;
            int32_t left = max(0, dfs(root->left, max_sum));
            int32_t right = max(0, dfs(root->right, max_sum));
            max_sum = max(max_sum, left + right + root->val);
            return max(left, right) + root->val;
        };
    
        dfs(root, max_sum);
        return max_sum;
    }
};