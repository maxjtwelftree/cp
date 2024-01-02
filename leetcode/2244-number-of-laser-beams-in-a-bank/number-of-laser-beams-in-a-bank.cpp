class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        auto tracker{0}, finder{0}, checker{0};
        vector<int> row_counter;

        for (const auto& row : bank) {
            for (const auto& i : row) {
                if (i == '1') tracker++;
            } if (tracker) {
                finder += (tracker * checker);
                checker = tracker;
                tracker = 0;
            }
        }

        return finder;
    }
};