class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size(), checker = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (target == nums[i]) {
                checker = min(checker, abs(i - start));
            }
        }
        
        return checker;
    }
};