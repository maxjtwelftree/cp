// Title Breadth First Search Function
// Parameters: graph, start
// Returns: A list of all vertices in the graph that can be reached from the starting vertex start
// Description: Performs a breadth-first search on a graph starting from the given vertex start
// Time Complexity: O(V + E) 
// Space Complexity: O(V)
// V is the number of vertices in the tree and E is the number of edges in the tree

// Definition for a tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Breadth-First Search for Trees (Level Order Traversal)
// What is actually used
void bfsTree(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        std::cout << current->val << " ";

        if (current->left != nullptr) {
            q.push(current->left);
        }

        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
}
 
