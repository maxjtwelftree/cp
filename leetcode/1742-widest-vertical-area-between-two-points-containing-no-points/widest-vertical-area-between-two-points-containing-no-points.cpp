class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        ranges::sort(points, [](const auto& a, const auto& b) {
            return a[0] < b[0];
        });
        
        auto finder = 0;
        for (size_t i = 1; i < size(points); ++i) 
            finder = max(finder, points[i][0] - points[i-1][0]);
        
        return finder;
    }
};