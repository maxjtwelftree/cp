class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>check1(nums1.begin(), nums1.end());
        unordered_set<int>check2(nums2.begin(), nums2.end());
        vector<int>v1, v2;

        for (const auto& i : check1) {
            if (!check2.count(i)) v1.push_back(i);
        }
        
        for (const auto& i : check2) {
            if (!check1.count(i)) v2.push_back(i);
        }
        
        return {v1, v2};
    }
};