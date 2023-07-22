// Title: Union Find 
// Parameters: None
// Returns: A Union-Find data structure that can be used to perform union and find operations on a collection of disjoint sets
// Description: Implements a basic Union-Find data structure that can be used to solve problems involving disjoint sets
// Time Complexity = O(n)
// Space Complexity = O(n)

public:
    UnionFind(int n) {
        // Initialize the parent and rank arrays
        parent.resize(n);
        rank.resize(n, 1);

        // Initialize each element as its own parent (disjoint set)
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    // Find the parent (root) of the set to which the element belongs
    int find(int x) {
        if (parent[x] != x) {
            // Path compression: set the parent directly to the root
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    // Union two sets by their ranks (depths)
    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else {
                // If the ranks are equal, arbitrarily set one as the parent and increment its rank
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }

    // Check if two elements belong to the same set (connected components)
    bool areConnected(int x, int y) {
        return find(x) == find(y);
    }
};
