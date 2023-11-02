class Solution {
public:
    int cnt = 0;
    int averageOfSubtree(TreeNode* root) {
        vector<int> out = dfs(root);
        return cnt;
    }

    vector<int> dfs(TreeNode* root) {
        if (root == NULL) return {0,0};

        vector<int> left = dfs(root->left);
        vector<int> right = dfs(root->right);

        int sum = left[0] + right[0] + root->val;
        int nodes = left[1] + right[1] + 1;
        
        if (sum / nodes == root ->val) {
            cnt++; 
        }
        
        return {sum, nodes};
    }
};