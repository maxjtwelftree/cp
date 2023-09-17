class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        vector<int> a = nums;
        sort(a.begin(), a.end());

        int n = nums.size();
        int swaps = 0;
        for (int i = 0; i < n; i++) {
            if (nums == a) return swaps;
            rotate(nums.begin(), nums.end()-1, nums.end());
            swaps++;
        }
        return -1;
    }
};