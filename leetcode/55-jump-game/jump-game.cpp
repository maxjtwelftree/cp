class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size(), goal = 0;
        
        for (int i = 0; i < n; i++) {
            if (i > goal) {
                return false;
            }
            goal = max(goal, nums[i] + i);
        }
        
        return true;
    }
};