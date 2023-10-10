class Solution {
public:
    int minOperations(vector<int>& nums) {
        // sliding window with unique numbers 
        // consider min as start of range with two pointers
        // where our i pointer is at 0 and j iterates till we reach n + 1
        // [1, 2, 3, 5, 6]
        // for this we start i = 0, and j goes till it reaches n index + 1
        // this works even if our target (n) doesnt exist 
        // we then shift our l pointer once our right reaches n index + 1 so that it acts as a
        // count for missing elements (ie, our size of our window becomes equal to our ans)
        // ^ this just means shift our left our right hits n index + 1 and is yet to see the
        // element that makes our array continuous  
        // then we just take our arr size from our window size
        int n = nums.size();
        int l = 0;
        int ans = 0;
        sort(nums.begin(), nums.end());
        nums.erase(unique(begin(nums), end(nums)), end(nums)); // only keep unique elements

        for (int r = 0; r < nums.size(); r++) {
            // while (r < n && nums[r] < nums[l] + n) {
            //     r++;
            // }
            while (nums[l] + n <= nums[r]) {
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return n - ans;
    }
};