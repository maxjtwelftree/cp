class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> MySet;
        int n = nums.size();

        for (int i = n-1; i < n; i--) {
            if (nums[i] <= k) MySet.insert(nums[i]);
            if (MySet.size() == k) return n-i;
        }
        return n;
    }
};