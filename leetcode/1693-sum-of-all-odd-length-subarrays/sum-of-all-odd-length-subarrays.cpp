class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        int result = 0; 
        // start with result and n to make code cleaner 
        for (int i = 0; i < n; i++) {
            int start = n - i;
            int end = i + 1;
            int total = start * end;
            int odd = total/2;
            // give values for notes 
            if (total % 2 == 1) {
                odd++;
            }
            // check if total equals an odd 
            result += odd * arr[i];
            // give result value, += is equivalent to result = result + (odd * arr[i])
        }
        return result;
    }
};