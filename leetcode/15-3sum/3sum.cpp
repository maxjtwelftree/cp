class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triples_vector;
        set<vector<int>> my_set;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n-2; i++) {
            // if (i > 0) break;
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    my_set.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        for (auto ans : my_set) {
            triples_vector.push_back(ans);
        }

        return triples_vector;
    }
}; 