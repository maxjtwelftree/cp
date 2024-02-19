class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        ranges::sort(nums);
        int32_t left = 0, right = 1, answer = 0; 

        while (left < nums.size() && right < nums.size()) {
            if (left == right || nums[right] - nums[left] < k) right++;
            else if (nums[right] - nums[left] > k) left++;
            else {
                answer++;
                left++;
                while (left < nums.size() && nums[left] == nums[left - 1]) left++;
            } if (right <= left) right = left + 1;
        }

        return answer;
    }
};