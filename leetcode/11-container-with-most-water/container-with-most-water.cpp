class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int j = n - 1;
        int i = 0;
        int res = 0;
        int curr = 0;

        while (i < j) {
            curr = (j - i) * min(height[i], height[j]);
            res = max(res, curr);
            
            // [1,8,6,2,5,4,8,3,7]
            if (height[i] <= height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return res;
    }
};