class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<int> my_returning;
        queue<pair<int, int>> q;
        q.push({0,0});
        
        while (!q.empty()) {
            int curr_i = q.front().first; 
            int curr_j = q.front().second;
            q.pop();
            my_returning.push_back(nums[curr_i][curr_j]);

            if (curr_j == 0 && curr_i + 1 < nums.size()) {
                q.push({curr_i + 1, curr_j});
            }

            if (curr_j + 1 < nums[curr_i].size()) {
                q.push({curr_i, curr_j + 1});
            }
        }

        return my_returning;
    }
};