class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0, ans = 0;
        long long curr = 0;

        // [1,2,4]
        //  l
        //. r

        // t = 1;
        // curr += 1;
        // 1-1 * 1 - > K ???
        // keep going till that does and then we decrement current, 

        // and left++ 

        // 1,2,4
        // keeps going till r is greater and curr is greater than k

        for (int r = 0; r < nums.size(); r++) {
            long long t = nums[r];
            curr += t;

            // this line
            // 1,2,4
            //   r   l = 3 * 2 = 6 - 4 > 2 then we increment l
            while ((r - l + 1) * t - curr > k) {
                curr -= nums[l];
                l++;
            }

            ans = max(ans, r - l + 1);
        }


        return ans;
    }
};