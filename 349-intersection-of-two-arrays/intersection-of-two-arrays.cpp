struct Solution {
    vector<int> intersection(const vector<int>& nums1, const vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end()); 
        vector<int> result;

        copy_if(nums2.begin(), nums2.end(), std::back_inserter(result), [&](auto num) { 
            return set.erase(num); 
        }); 

        return result;
    }
};