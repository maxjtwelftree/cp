struct Solution {
    vector<int> intersection(const vector<int>& nums1, const vector<int>& nums2) {
        vector<int> result;
        unordered_set<int> seen; 

        for (const int num : nums1) {
            if (std::ranges::find(nums2, num) != nums2.end() && !seen.contains(num)) {
                result.push_back(num);
                seen.insert(num);
            }
        }

        return result;
    }
};