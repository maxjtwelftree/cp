class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> map;

        for (int num : nums) {
            map[num]++;
        }

        int can = n/3;

        vector<int> out;
        for (auto i : map) {
            if (i.second > can) {
                out.push_back(static_cast<int>(i.first));
            }
        }
        return out;        
    }
};