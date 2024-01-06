struct Solution {
    int maxProduct(vector<int>& nums) {
        auto max1 = 0, max2 = 0;

        for_each(nums.begin(), nums.end(), [&max1, &max2](auto num) {
            if (num > max1) {
                max2 = max1;
                max1 = num;
            } else if (num > max2) {
                max2 = num;
            }
        });

        return (max1 - 1) * (max2 - 1);
    }
};