class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> setting{};
        for (const auto& x : nums)  {
            setting.insert(x);
            if (setting.size() > k) {
                setting.erase(setting.begin());
            }
        }
        return *setting.begin();
    }
};