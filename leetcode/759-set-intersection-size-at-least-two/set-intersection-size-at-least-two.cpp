class Solution {
public:
    static bool check(vector<int>& a, vector<int> & b) {
        // this checks if two intervals have the same right, if they do
        // we sort by left in descending order (so the min is always taken)
        if (a[1] == b[1]) {
            return a[0] > b[0];
        } else {
            return a[1] < b[1];
        }
    }

    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        int n = intervals.size();
        // this sorts from right end, and then submits our check function
        sort(intervals.begin(), intervals.end(), check);

        // this is always 2 as our cnt will never be below two as the size of intervals is 2
        int cnt = 2;
        int last = intervals[0][1];
        int secondLast = last - 1;

        for (int i = 1; i < n; i++) {
            // first check if current is covered by the last one element 
            if (secondLast >= intervals[i][0]) {
                continue;
            } else if (last >= intervals[i][0]) {
                secondLast = last;
                last = intervals[i][1];
                cnt++;
            } else {
                secondLast = intervals[i][1]-1;
                last = intervals[i][1];
                // as this is two swaps
                cnt += 2;
            }
        }
        return cnt;
    }
};