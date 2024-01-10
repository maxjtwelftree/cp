class Solution {
public:
    int arraySign(vector<int>& nums) {
        int p = 1;
        for(auto x: nums) {
            if(x == 0) return 0; // Product is zero if any element is zero
            else if(x < 0) p *= -1; // Just track the sign of the product
        }
        return p;
    }
};