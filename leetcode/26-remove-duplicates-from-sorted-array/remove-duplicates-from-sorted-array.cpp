class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i-1]) {
                k++;
            }
            else {
                nums[i-k] = nums[i];
            }
        }
        return n-k;
    }
};