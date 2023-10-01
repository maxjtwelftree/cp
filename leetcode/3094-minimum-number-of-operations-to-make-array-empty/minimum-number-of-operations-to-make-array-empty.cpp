class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> map;
        int count = 0;

        for (int num : nums) {
            map[num]++;
        }

        for (auto it : map) {
            if (it.second == 1) {
                return -1;
            }
            if (it.second % 3 == 0) {
                count += (it.second/3);
            } else {
                count += (it.second/3) + 1;
            }
        }

        return count;
        
    }
};