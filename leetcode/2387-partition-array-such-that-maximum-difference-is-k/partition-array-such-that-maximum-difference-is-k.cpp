class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        auto counter{1}, first{0};
        ranges::sort(nums);

        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] - nums[first] > k)  {
                counter++;
                first = i;
            }
        }

        return counter;
    }
};