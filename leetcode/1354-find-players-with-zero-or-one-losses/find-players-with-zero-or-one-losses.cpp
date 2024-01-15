class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> winners, losers;
        for (const auto& x : matches) {
            winners[x[0]]++;  
            losers[x[1]]++;  
        }
        
        vector<int> neverLost, lostOnce;
        for (const auto& w : winners) {
            if (losers.find(w.first) == losers.end()) {
                neverLost.push_back(w.first);
            }
        }
        for (const auto& l : losers) {
            if (l.second == 1) { 
                lostOnce.push_back(l.first);
            }
        }

        ranges::sort(neverLost), ranges::sort(lostOnce);
        return {neverLost, lostOnce};
    }
};