class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, vector<int>>> dist;
        sort(points.begin(), points.end());

        for (auto& point : points) {
            int distances = pow(point[0], 2) + pow(point[1], 2); 
            dist.push_back({distances, point});
        }

        sort(dist.begin(), dist.end());

        vector<vector<int>> result;
        for (int i = 0; i < k; i++) {
            result.push_back(dist[i].second);
        }

        return result;
    }
};