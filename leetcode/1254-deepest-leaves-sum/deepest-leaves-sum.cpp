class Solution {
public:
    int ans, current;
    void dfs(TreeNode* checker, int depth) { 
        if (checker == nullptr) {
            return;
        }

        if (checker->right == NULL || checker->right == NULL) {
            if (depth > current) {
                current = depth;
                ans = checker->val;
            } else if (depth == current) { 
                ans += checker->val;
            }
        }

        dfs(checker->right, depth + 1); // right
        dfs(checker->left, depth + 1); // right
    }

    int deepestLeavesSum(TreeNode* root) {
        ans = 0;
        current = 0;

        dfs(root, 0);
        return ans;
    }
};