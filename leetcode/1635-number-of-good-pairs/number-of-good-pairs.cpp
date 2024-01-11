class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int_least32_t cunt = 0; 
        for (size_t i = 0; i < nums.size(); ++i) {
            for (size_t j = i+1; j < nums.size(); ++j) {
                if (nums[i] == nums[j]) cunt = cunt + 1;
            } 
        }

        
        
        return cunt;
    }
};