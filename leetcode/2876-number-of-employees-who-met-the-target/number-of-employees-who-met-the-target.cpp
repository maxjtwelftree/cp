class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n = hours.size();
        int ans = 0;
        for (int hour : hours) {
            if (hour >= target) ans++;
        }
        return ans;
    }
};