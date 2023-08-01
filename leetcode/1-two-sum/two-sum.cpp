class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // [value, index] (value = nums[i])
        unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];
            int need = target-nums[i];
            if (map.count(need)) {
                return {i, map[need]};
            }
            if(!map.count(need)) {
                map[current] = i;
            }
        }
        return {};

    }
};