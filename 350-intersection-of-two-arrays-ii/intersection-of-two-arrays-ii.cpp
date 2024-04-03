class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mapping;
        for (const auto& x : nums1)
            mapping[x]++;

        vector<int> intersection;
        for (const auto& x : nums2) {
            if (mapping[x] > 0) {
                intersection.push_back(x);
                mapping[x]--;
            }
        }
        return intersection;
    }
};