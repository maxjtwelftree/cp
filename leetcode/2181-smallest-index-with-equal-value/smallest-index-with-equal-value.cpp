class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        for (auto i = 0; i < nums.size(); i++) {
            if (i % 10 == nums[i]) return i;
        }
        return -1;
    }
};