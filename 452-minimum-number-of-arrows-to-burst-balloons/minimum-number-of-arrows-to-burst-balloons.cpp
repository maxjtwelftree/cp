class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(), p.end());
        int point_last = p[0][1];
        int ans = 1;
        for (auto point : p) {
            if (point[0] > point_last) {
                ans++;
                point_last = point[1];
            }
            point_last = min(point[1], point_last);
        }
        return ans;
    }
};