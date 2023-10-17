class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int next = 0;
        // greedy very greedy
        for (int i = 0; i < n; i++) {
            if (i > next) {
                return false;
            } 
            // this check is key
            next = max(next, nums[i] + i);
        }

        return true;
        
    }
};