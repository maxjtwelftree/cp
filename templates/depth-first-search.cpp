// Title: Depth First Search Function 
// Parameters: graph, start
// Returns: A list of all vertices in the graph that can be reached from the starting vertex start
// Description: Performs a depth-first search on a graph starting from the given vertex start
// Time Complexity: O(V + E) 
// Space Complexity: O(V)
// V is the number of vertices in the tree and E is the number of edges in the tree

// Definition for a tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// If working with a binary tree, replace `vector<vector<int>>` with the appropriate tree representation
void dfs(vector<vector<int>>& graph, int node, vector<bool>& visited) {
    // Mark the current node as visited
    visited[node] = true;

    // Process the current node
    // For LeetCode problems, you may perform the necessary operations here

    // Traverse all neighbors of the current node
    for (int neighbor : graph[node]) {
        // If the neighbor is not visited, recursively call the DFS function
        if (!visited[neighbor]) {
            dfs(graph, neighbor, visited);
        }
    }
}
