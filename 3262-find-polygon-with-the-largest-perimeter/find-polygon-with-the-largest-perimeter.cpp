struct Solution {
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());      
        long long sum_so_far = nums[0] + nums[1], final_ans = 0;
        for (int i = 2; i < nums.size(); ++i) {
            if (sum_so_far > nums[i]) final_ans = sum_so_far + nums[i];
            sum_so_far += nums[i];
        }
        return final_ans == 0 ? -1 : final_ans;
    }
};