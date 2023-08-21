class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int maxCount = 1;
        int n = nums.size();

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i+1]) {
                count++;
                maxCount = max(maxCount, count);
            }
            else {
                count = 1;
            }
        }
        return maxCount;
    }
};