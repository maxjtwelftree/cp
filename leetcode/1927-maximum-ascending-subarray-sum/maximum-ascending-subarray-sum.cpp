class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size(), curr = nums[0], ans = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i-1] < nums[i]) {
                curr += nums[i];
            } else {
                curr = nums[i];
            }
            ans = max(ans, curr);
        }

        // if (ans > n)
        return ans;
    }
};