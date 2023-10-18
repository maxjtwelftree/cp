class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, start = 0, end = 0;

        while (end < n - 1) {
            cnt++;
            int maxend = end + 1;
            for (int i = start; i <= end; i++) {
                if (i + nums[i] >= n - 1) {
                    return cnt;
                }
                maxend = max(maxend, i + nums[i]);
            }
            start = end + 1;
            end = maxend;
        }
        return cnt;
    }
};