class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int fixes = 1;
        int is = INT_MIN;
        int ok = INT_MIN;

        for (int i = 0; i < n; i++) {
            fixes *= nums[i];
            is = max(is, fixes);
            if (fixes == 0) fixes = 1;
        }
        fixes = 1;
        for (int i = n-1; i >= 0; i--) {
            fixes *= nums[i];
            is = max(is, fixes);
            if (fixes == 0) fixes = 1;
        }

        return is;        
    }
};