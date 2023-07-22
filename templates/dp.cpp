// Title: Dynamic Programming (Top-Down (Memoization) and Bottom-Up (Tabulation))
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

// Notes: The fibMemo function represents the memoization approach. 
// It uses an unordered_map called memo to store the previously computed Fibonacci numbers, avoiding redundant calculations. 
// The function recursively calculates the Fibonacci number for a given index n while utilizing the stored values in the memo map.
// The fibTab function represents the tabulation approach. It uses a vector dp to store the Fibonacci numbers in a bottom-up manner. 
// Starting from the base cases dp[0] = 0 and dp[1] = 1, the function iteratively calculates the Fibonacci numbers up to the target index n.
// Both approaches yield the same Fibonacci number for the given index n. 
// You can modify the n variable in the main function to compute Fibonacci numbers for different indices.
// This template can be generalized and adapted for other dynamic programming problems,
// where memoization and tabulation techniques are often used for optimizing recursive solutions and reducing time complexity.
