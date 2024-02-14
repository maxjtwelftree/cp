struct Solution {
    [[nodiscard]] vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positives, negatives, result;

        for_each(nums.begin(), nums.end(), [&positives, &negatives] (int a) {
            if (a > 0) positives.push_back(a);
            else negatives.push_back(a);
        });
        
        for (size_t i = 0; i < positives.size(); ++i) {
            result.push_back(positives[i]);
            result.push_back(negatives[i]);
        }

        return result;
    }
};