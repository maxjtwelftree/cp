class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        return quickSelect(nums, k);
    }

    int quickSelect(vector<int>& nums, int k) {
        auto pivot = nums[rand() % nums.size()];
        
        vector<int> less_than_pivot, middle, greater_than_pivot;
        
        for (auto check: nums) {
            if (check > pivot) {
                less_than_pivot.push_back(check);
            } else if (check < pivot) {
                greater_than_pivot.push_back(check);
            } else {
                middle.push_back(check);
            }
        }
        
        if (k <= less_than_pivot.size()) return quickSelect(less_than_pivot, k);
        
        if (less_than_pivot.size() + middle.size() < k) return quickSelect(greater_than_pivot, k - less_than_pivot.size() - middle.size());
        
        return pivot;
        
    }
};