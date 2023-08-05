class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> MaxsMap;

        for (auto num : nums) {
            MaxsMap[num]++;
        }

        int maximimum = 0;
        int majority = 0;
        for (const auto& pair : MaxsMap) {
            if (pair.second > maximimum) {
                maximimum = pair.second;
                majority = pair.first;
            }
        }
        return majority;
    } 
};