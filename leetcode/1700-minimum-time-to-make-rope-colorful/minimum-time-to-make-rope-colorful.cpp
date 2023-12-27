class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        auto counter{0};
        
        for (size_t i = 1; i < colors.size(); i++) {
            if (colors[i] == colors[i-1]) {
                counter += min(neededTime[i], neededTime[i - 1]);
                neededTime[i] = max(neededTime[i], neededTime[i - 1]);
            }
        }

        return counter;
    }
};