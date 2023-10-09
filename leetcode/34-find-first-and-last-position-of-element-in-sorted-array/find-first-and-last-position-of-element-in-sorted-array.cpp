class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int r = n;
        int l = 0;

        while (l < r) {
            // always!
            int m = (l+r)/2;
            if (nums[m] >= target) {
                r = m;
            } 
            else {
                l = m+1;
            }
        }

        int out1 = l;
        l = 0;
        r = n;

        while (l < r) {
            int m = (l+r)/2;
            if (nums[m] > target) {
                r = m;
            } else {
                l = m+1;
            }
        }

        int out2 = r;

        return out1 == out2 ? vector<int>{-1, -1} : vector<int> {out1, out2-1};
    }
};

