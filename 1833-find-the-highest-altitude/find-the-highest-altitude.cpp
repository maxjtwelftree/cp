class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // [-5,1,5,0,-7]
        // = -5 + 1 = -4
        int finder = 0, max_gain = 0;

        for (auto& x : gain) {
            finder += x;
            max_gain = max(max_gain, finder);
        }

        return max_gain;

    }
};