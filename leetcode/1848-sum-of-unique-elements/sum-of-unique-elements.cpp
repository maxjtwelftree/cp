class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> finding_freqs{};
        int counter{0};

        for (const auto i : nums) finding_freqs[i]++;

        for (const auto [x, y] : finding_freqs)
            if (y == 1) counter += x;
        
        return counter;
    }
};