class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxthing = 0;
        for (int i = 0; i < n; i+=2) {
            maxthing += nums[i];
        }
        return maxthing;
    }
};