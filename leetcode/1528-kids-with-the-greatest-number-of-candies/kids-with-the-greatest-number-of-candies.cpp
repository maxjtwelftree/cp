class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>arr(candies.size(),false);
        int m = *max_element(candies.begin(),candies.end());

        for (int i = 0; i < n; i++) {
            if ((candies[i] + extraCandies) >= m) {
            arr[i] = true;
            }
        }
        return arr;
    }
};