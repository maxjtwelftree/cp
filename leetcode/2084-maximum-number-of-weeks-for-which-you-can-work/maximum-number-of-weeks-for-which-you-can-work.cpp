class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long sum = 0;
        int checker = 0;

        // 1,2,3
        // sum = 6
        // checker = 3

        // so we return sum, the main point of this is to just do the initial check i tried (the difference between two nums)

        for (int i = 0; i < milestones.size(); i++) {
            sum += milestones[i];
            checker = max(checker, milestones[i]);
        }

        if (checker > sum - checker) {
            return 2 * (sum - checker) + 1;
        }

        return sum;
    }
};