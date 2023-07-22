// Title: Dynamic Programming (Top-Down (Memoization) and Bottom-Up (Tabulation)
// Parameters: f, g, n
// Returns: The result of applying the dynamic programming algorithm to the given functions f and g and input size n
// Description: Solves a problem by breaking it down into smaller subproblems and solving them recursively using functions f and g
// Example: Cutting larger problems into smaller ones (LC 70. Climbing Stairs)

// Memoization (Top-Down) approach using unordered_map
int fibMemo(int n, std::unordered_map<int, int>& memo) {
    if (n <= 1) {
        return n;
    }

    if (memo.find(n) != memo.end()) {
        return memo[n];
    }

    memo[n] = fibMemo(n - 1, memo) + fibMemo(n - 2, memo);
    return memo[n];
}

// Tabulation (Bottom-Up) approach using vector
int fibTab(int n) {
    std::vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}
