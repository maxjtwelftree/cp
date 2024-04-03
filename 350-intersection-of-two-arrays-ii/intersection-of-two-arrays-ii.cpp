class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        array<long long, 2000> mapping;

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