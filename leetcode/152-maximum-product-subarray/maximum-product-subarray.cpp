class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // init parameters
        int n = nums.size();
        int fixes = 1;
        int sub = INT_MIN;

        // iterate over from 0th index
        for (int i = 0; i < n; i++) {
            // times equal each num
            fixes *= nums[i];
            // computer sub = to our fixes
            sub = max(sub, fixes);
            // so we don't return 0 when we need greater than 0
            if (fixes == 0) fixes = 1;
        }

        // similarly, so we don't return 0 when we need greater than 0
        fixes = 1;

        // iterate from the end of the array
        for (int i = n-1; i >= 0; i--) {
            // compute them again 
            fixes *= nums[i];
            // similarly 
            sub = max(sub, fixes);
            // all the same logic 
            if (fixes == 0) fixes = 1;
        }

        // [2,3,-2,4] for this 
        // our first for loop
        // i=0: fixes = 2    sub = 2
        // i=1: fixes = 6    sub = 6
        // i=2: fixes = -12  sub = 6  (sub remains 6 because -12 < 6)
        // i=3: fixes = -48  sub = 6  (sub remains 6 because -48 < 6)




        return sub;        
    }
};