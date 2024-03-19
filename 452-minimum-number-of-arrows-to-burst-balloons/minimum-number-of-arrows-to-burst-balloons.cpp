class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(), p.end());
        int starter = p[0][1], counter = 1;

        for (auto x : p) {
            if (x[0] > starter) {
                counter++;
                starter = x[1];
            } 
            starter = min(x[1], starter);
        }

        return counter;
    }
};