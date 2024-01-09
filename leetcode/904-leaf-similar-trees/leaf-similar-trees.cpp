class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> root1_vector;
        vector<int> root2_vector;

        function<void(TreeNode*, vector<int>&)> dfs = [&](TreeNode* node, vector<int>& vec) {
            if (node == nullptr) return;
            if (node->left == nullptr && node->right == nullptr) vec.push_back(node->val);
            if (node->right != nullptr) dfs(node->right, vec);
            if (node->left != nullptr) dfs(node->left, vec);
        };

        dfs(root1, root1_vector);
        dfs(root2, root2_vector);
        
        return root1_vector == root2_vector;
    }
};