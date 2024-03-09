struct Solution {
    [[nodiscard]] int getCommon(vector<int>& nums1, vector<int>& nums2) const {
        auto set = unordered_set<int>(nums2.cbegin(), nums2.cend());
        for (const auto& a : nums1) if (set.contains(a)) return a;
        return -1;
    }
};