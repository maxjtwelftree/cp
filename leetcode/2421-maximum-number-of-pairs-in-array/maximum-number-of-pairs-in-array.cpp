class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> map; 
        int count = 0;

        // Get the frequencies of numbers in nums
        for (auto n : nums) {
            map[n]++;
        }

        int oddFreqCount = 0;
        // For each number that appears, count the even pairs
        for (const auto& [num, freq] : map) {
            count += (freq / 2);  // count the number of pairs
            if (freq % 2 != 0) {
                oddFreqCount++;  // This counts the unique numbers with odd frequencies
            }
        }

        // Return the count of pairs and then the odd frequency count
        return {count, oddFreqCount};
    }
};
