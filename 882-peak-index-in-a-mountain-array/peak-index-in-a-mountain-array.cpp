class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int current_max = -99999999;
        int idx = -99999999;

        for (size_t i = 0; i < arr.size(); ++i) {
            if (arr[i] > current_max) {
                current_max = arr[i];
                idx = i;
            }

        }
        return idx;
    }
};