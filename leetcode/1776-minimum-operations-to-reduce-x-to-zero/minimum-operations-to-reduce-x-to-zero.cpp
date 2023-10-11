class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;
        int window = -1;
        int j = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        int curr = 0;

        for (int i = 0; i < n; i++) {
            curr += nums[i];
            while (j <= i && curr > sum - x) {
                curr -= nums[j];
                j++;
            }

            if (curr == sum - x) {
                window = max(window, i - j + 1);
            }
        }

        return window == -1 ? -1 : nums.size() - window;
    }
};