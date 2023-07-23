class Solution {
public:
    int findMin(vector<int>& nums) {
        return *min_element(nums.cbegin(), nums.cend());
    }
};