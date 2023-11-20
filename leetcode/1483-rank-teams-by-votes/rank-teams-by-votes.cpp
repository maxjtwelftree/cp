class Solution {
public:
    string rankTeams(vector<string>& votes) {
        unordered_map<char, vector<int>> teams;
        int n = votes[0].size();

        // Initialize the map
        for (char c : votes[0]) {
            teams[c] = vector<int>(n, 0);
        }

        for (string& vote : votes) {
            for (int i = 0; i < n; ++i) {
                teams[vote[i]][i]++;
            }
        }

        sort(votes[0].begin(), votes[0].end(), [&](char a, char b) {
            return teams[a] > teams[b] || (teams[a] == teams[b] && a < b);
        });

        return votes[0];
    }
};
