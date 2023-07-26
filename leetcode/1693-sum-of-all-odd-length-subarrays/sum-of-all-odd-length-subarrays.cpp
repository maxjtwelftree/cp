class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            for (int k = i; k < arr.size(); k++) {
                for (int j = i; j <= k; j++) {
                    if ((i + k) % 2 == 0) {
                        sum = sum + arr[j];
                    }
                }
            }
        }
        return sum;
        // understand a little better due to OOP, still not fully understood
        // time = O(n^3), three nested for loops
        // A more efficient approach would be to use a sliding window or a hash table to keep track of the sums of the subarrays, which could reduce the time complexity to O(n) or O(n log n)
        // Need to analyse greater 
    }
};