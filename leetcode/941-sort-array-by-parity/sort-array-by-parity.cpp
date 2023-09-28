class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();

        // pushing back to the left
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                res.push_back(nums[i]);
            }
        } 
        
        // pushing back to the right
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 1) {
                res.push_back(nums[i]);
            }
        } 
        
        return res;
    }
};