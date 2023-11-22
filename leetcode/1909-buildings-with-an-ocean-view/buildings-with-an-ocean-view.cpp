class Solution {
public:
    vector<int> findBuildings(vector<int>& heights) {
        vector<int> ans;
        int curr = 0;

        for (int i = 0; i < heights.size(); i++) {
            while (!ans.empty() && heights[ans.back()] <= heights[i]) {
                ans.pop_back();
            }
            ans.push_back(i);
        }

        return ans;
    }
};