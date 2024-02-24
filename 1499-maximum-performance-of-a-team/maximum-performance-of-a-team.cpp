class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        // Create pairs of efficiency and speed for sorting
        vector<pair<int, int>> eng(n);
        for (int i = 0; i < n; ++i) {
            eng[i] = {efficiency[i], speed[i]};
        }

        // Sort engineers by efficiency in descending order
        sort(eng.begin(), eng.end(), [](const auto& a, const auto& b) {
            return a.first > b.first;
        });

        long long maxPerf = 0, speedSum = 0;
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (auto& [eff, spd] : eng) {
            if (minHeap.size() == k) { 
                speedSum -= minHeap.top();
                minHeap.pop();
            }
            minHeap.push(spd);
            speedSum += spd;
            maxPerf = max(maxPerf, speedSum * eff);
        }
        int mod = 1e9 + 7;
        return maxPerf % mod;
    }
};
