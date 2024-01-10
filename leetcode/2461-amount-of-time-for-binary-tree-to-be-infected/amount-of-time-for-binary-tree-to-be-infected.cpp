struct Solution {
    int amountOfTime(TreeNode* root, int start) {
        auto maxdist = 0;
        function<int(TreeNode*, int)> dfs = [&](TreeNode* node, int start) {
            auto counter = 0;     
            if (node == nullptr) return counter;

            auto leftDepth = dfs(node->left, start);
            auto rightDepth = dfs(node->right, start);

            if (node->val == start) {
                maxdist = max(leftDepth, rightDepth);
                counter = -1;
            } else if (leftDepth >= 0 && rightDepth >= 0) {
                counter = max(leftDepth, rightDepth) + 1;
            } else {
                auto dist = abs(leftDepth) + abs(rightDepth);
                maxdist = max(maxdist, dist);
                counter = min(leftDepth, rightDepth) - 1;
            }
            return counter;
        };

        dfs(root, start);
        return maxdist;
    }
};