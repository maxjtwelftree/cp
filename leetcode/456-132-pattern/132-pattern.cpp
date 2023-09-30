class Solution {
public:
    bool find132pattern(vector<int>& nums) {

        int n = nums.size();

        if (n < 3) {
            return false;
        }

        vector<int> minarr(n);

        minarr[0] = nums[0];

        for (size_t i = 1; i < n; i++) {
            minarr[i]=min(minarr[i-1], nums[i]);
        }

        for (size_t j = n - 1, k = n; j>0; j--) {
            if (nums[j] <= minarr[j]) {
                continue;
            }
            while (k < n && nums[k] <= minarr[j]) {
                k++;
            }
            if (k < n && nums[k] < nums[j]) {
                return true;
            }
            nums[--k] = nums[j];
        }
        return false;
        
    }
};