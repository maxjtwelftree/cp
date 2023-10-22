using i64 = long long;

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int minSum = INT_MAX; 
        bool found = false; 

        vector<int> left(n, nums[0]), right(n, nums[n-1]);


        for (int i = 1; i < n; i++) {
            left[i] = min(left[i-1], nums[i-1]);
        }


        for (int i = n - 2; i >= 0; i--) {
            right[i] = min(right[i+1], nums[i+1]);
        }


        for (int i = 1; i < n-1; i++) {
            if (nums[i] > left[i] && nums[i] > right[i]) {
                minSum = min(minSum, nums[i] + left[i] + right[i]);
                found = true;
            }
        }
        return found ? minSum : -1; 

    }

};