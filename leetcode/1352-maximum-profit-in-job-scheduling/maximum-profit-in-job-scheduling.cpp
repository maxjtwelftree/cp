struct Job {
    int start, end, profit;
};

class Solution {
public:
    int findLastNonConflictingJob(vector<Job>& profit_vector, int i) {
        int low = 0, high = i - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (profit_vector[mid].end <= profit_vector[i].start) {
                if (profit_vector[mid + 1].end <= profit_vector[i].start) {
                    low = mid + 1;
                } else {
                    return mid;
                }
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        auto current_profit = 0, final_profit = 0;
        vector<Job> profit_vector;

        for (size_t i = 0; i < startTime.size(); i++) {
            profit_vector.push_back({startTime[i], endTime[i], profit[i]});
        }

        sort(profit_vector.begin(), profit_vector.end(), [](const Job &a, const Job &b) {
            return a.end < b.end;
        });
        
        vector<int> dp(profit_vector.size());
        dp[0] = profit_vector[0].profit;

        for (int i = 1; i < profit_vector.size(); i++) {
            int includeProfit = profit_vector[i].profit;
            int l = findLastNonConflictingJob(profit_vector, i);
            if (l != -1) {
                includeProfit += dp[l];
            }
            dp[i] = max(includeProfit, dp[i - 1]);
        }

        return dp[profit_vector.size() - 1];
    }
};