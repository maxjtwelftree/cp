class Solution {
public:
        int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(), processorTime.end());
        sort(tasks.rbegin(), tasks.rend());

        int high = 0;

        for (int i = 0; i < processorTime.size(); ++i) {
            int low = processorTime[i];
            int time = 0;

            for (int j = 0; j < 4; ++j) {
                time = max(time, low + tasks[i * 4 + j]);
            }
            high = max(high, time);
        }

        return high;
    }
};