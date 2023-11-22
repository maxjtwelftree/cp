class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        //[1,2,3,4,5,6]
        // 
        for (int i = 1; i < nums.size() - 1; i+=2) {
            swap(nums[i], nums[i+1]);
        }
        
    }
};