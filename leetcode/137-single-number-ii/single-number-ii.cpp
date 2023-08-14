class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        int ans = 0;
        for (auto x : nums) {
            freq[x]++;
        }

        for (auto pair : freq) {
            if (pair.second == 1) {
                ans = pair.first;
                break;
            }
        }
        
        return ans;
    }
};