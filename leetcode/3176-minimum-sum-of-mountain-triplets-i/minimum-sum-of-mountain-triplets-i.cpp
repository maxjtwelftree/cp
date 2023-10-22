using i64 = long long;

class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int minSum = INT_MAX; 
        bool found = false; 
        
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                for (int k = j+1; k < n; k++) {
                    if (nums[i] < nums[j] && nums[k] < nums[j]) {
                        minSum = min(minSum, nums[i] + nums[j] + nums[k]);
                        found = true;
                    }
                }
            }
        }
        
        return found ? minSum : -1; 
    }
};
