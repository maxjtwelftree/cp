class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int_least32_t left = 0;
        int_least32_t right = arr.size() - 1;

        while (left < right) {
            int middle = (left + right) / 2;
            if (arr[middle + 1] > arr[middle]) left = middle + 1;
            else if (arr[middle] > arr[middle + 1]) right = middle;
        }

        return left;
    }
};