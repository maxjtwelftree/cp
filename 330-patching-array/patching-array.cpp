class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        auto current_sum = accumulate(nums.cbegin(), nums.cend(), 0);
        auto new_target = n - 1;
        long current = 1, x = 0;
        auto answer =0;
        // while loop with a counter for this math to find how many numbers we need to do;
        while (current <= n) {
            if (x < nums.size() && nums[x] <= current) {
                current += nums[x++];
            } else {
                current += current;
                answer++;
            }
        }
        return answer;
    }
};