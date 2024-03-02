class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> square;

        for (int i : nums) {
            int x = i * i;
            square.push_back(x);
        }

        sort(square.begin(), square.end());

        return square;


    }
};