class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for (int i =0 ; i < n; i++) {
            for (int j = i+1 ; j < n; j++) {
                for (int x = j+1 ; x < n; x++) {
                    for (int y = x+1 ; y < n; y++) {
                        if (nums[i] + nums[j] + nums[x] == nums[y]) {
                            cnt += 1;
                        }
                    }
                }
            }

        }
        return cnt;
        
        
    }
};