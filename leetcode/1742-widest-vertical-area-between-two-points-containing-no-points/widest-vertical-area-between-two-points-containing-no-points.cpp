class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
        
        auto finder = 0;
        for (auto i = 1; i < size(points); ++i) 
            finder = max(finder, points[i][0] - points[i-1][0]);
        
        return finder;
    }
};