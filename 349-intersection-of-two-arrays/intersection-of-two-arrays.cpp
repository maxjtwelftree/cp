struct Solution {
    vector<int> intersection(const vector<int>& nums1, const vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end()); // Create a set from nums1
        vector<int> result;

        // Filter elements from nums2, adding unique ones to the result
        std::copy_if(nums2.begin(), nums2.end(), std::back_inserter(result),
                    [&](int num) { return set.erase(num); }); 

        return result;
    }
};