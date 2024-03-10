struct Solution {
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums2.begin(), nums2.end()); 
        vector<int> result; 
        for (const auto x : nums1) {
            if (set.contains(x)) { 
                result.push_back(x); 
                set.erase(x); 
            }
        }
        return result; 
    }
};
