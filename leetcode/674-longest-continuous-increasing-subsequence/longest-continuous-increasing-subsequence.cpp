class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int result = 1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i+1]) {
                count++;
                result = max(result, count);
            }
            else {
                count = 1;
            }
        }
        return result;
    }
};