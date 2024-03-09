class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums2.begin(), nums2.end());
        
        for (auto a : nums1) {
            if (set.contains(a)) return a;
        }
        
        return -1;
    }
};