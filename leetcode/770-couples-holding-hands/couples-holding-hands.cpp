class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
        int swapping_tracking = 0;

        for (size_t i = 0; i < row.size(); i += 2) {
            int x = row[i];
            int parent_check = x ^ 1;
            if (row[i+1] == parent_check) continue;
            swapping_tracking++;

            for (size_t j = i + 1; j < row.size(); ++j) {
                if (row[j] == parent_check) {
                    swap(row[i + 1], row[j]);
                    break;
                }
            }
        }

        return swapping_tracking;
    }
};