class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        ranges::sort(nums);


        for (int left = 0; left < nums.size(); left++) {
            int right = left + 1;
            if (nums[left] == nums[right]) return nums[left];
        }

        return -1;
    }
};