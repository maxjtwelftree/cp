class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = INT_MIN, secondLargest = INT_MIN;
        int largestIndex = -1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
                largestIndex = i;
            }
            else if (nums[i] > secondLargest) {
                secondLargest = nums[i];
            }
        }
        if (largest >= 2 * secondLargest) {
            return largestIndex;
        }
        return -1;
    }
};