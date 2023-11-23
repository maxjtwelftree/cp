class Solution {
public:
    bool check(vector<int>& new_array) {
        sort(new_array.begin(), new_array.end());
        int checker = new_array[1] - new_array[0];

        for (int i = 2; i < new_array.size(); i++) {
            if (new_array[i] - new_array[i-1] != checker) {
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for (int i = 0; i < l.size(); i++) {
            vector<int> new_array(begin(nums) + l[i], begin(nums) + r[i] + 1);
            ans.push_back(check(new_array));
        }
        return ans;
    }
};