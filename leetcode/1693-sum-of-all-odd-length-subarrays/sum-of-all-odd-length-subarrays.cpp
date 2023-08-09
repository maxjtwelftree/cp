class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int result = 0;

        for (int i = 0; i < n; i++) {
            int start = i + 1;
            int end = n - i;
            result += ((start) * (end) + 1) / 2 * arr[i];
        }
        return result;
    }
};