class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> a{};
        unordered_set<int> set(nums2.begin(), nums2.end());

        for (const auto x : nums1) if (set.contains(x)) a.insert(x);

        vector<int> b{};
        for (const auto x : a) b.push_back(x);

        return b;
    }
};