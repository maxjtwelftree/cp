class Solution {
public:
    int mod = 1e9 + 7;

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        stack<pair<int,int>> s; // Create a stack to keep track of elements and their contributions.

        for(int i = n - 1; i >= 0; i--) { // Loop through the input array in reverse order.
            while(!s.empty() && arr[s.top().first] > arr[i]) s.pop(); // Pop elements greater than the current element.

            int index = s.size() == 0 ? n : s.top().first; // Get the index of the previous element in the stack.
            int num = s.size() == 0 ? 0 : s.top().second; // Get the cumulative sum of elements popped from the stack.
            
            int sum = (((index - i) * arr[i]) % mod + num % mod) % mod; // Calculate the contribution of the current element.
            s.push({i, sum}); // Push the current element and its contribution onto the stack.
            ans = (ans % mod + sum % mod) % mod; // Update the answer by adding the current contribution.
        }

        return ans; // Return the final answer modulo 10^9 + 7.
    }
};