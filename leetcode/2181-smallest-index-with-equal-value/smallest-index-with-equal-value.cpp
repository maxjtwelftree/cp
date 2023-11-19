class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for (auto i = 0; i < nums.size(); i++) {
            if (i % 10 == nums[i]) return i;
        }
        return -1;
    }
};