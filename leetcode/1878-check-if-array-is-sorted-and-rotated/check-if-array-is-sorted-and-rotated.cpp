class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int check = 0;

        for (auto i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                check++;
            }
        }

        if (check > 1) {
            return false;
        }

        return true;
    }
};