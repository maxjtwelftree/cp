class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> map;
        int n = nums.size();
        for (int num : nums) {
            if (num%2 == 0) {
                map[num]++;
            }
        }
        int maxEvenNum = -1;
        int maxCount = -1;
        for (auto pair : map) {
            if (pair.first % 2 == 0 && pair.second > maxCount) {
                maxCount = pair.second;
                maxEvenNum = pair.first;
            }
            else if (pair.second == maxCount) {
                maxEvenNum = min(maxEvenNum, pair.first);
            }
        }
        return maxEvenNum;
    }
};