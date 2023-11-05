class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size(); k = min(k, n);
        int cnt = 0, winner = arr[0];
        
        queue<int> q;
        for (int i = 1; i < n; i++) q.push(arr[i]);

        while (cnt < k) {
            int first = winner, second = q.front();
            q.pop();
            if (first > second) {
                q.push(second);
                cnt++;
            } else {
                q.push(first);
                winner = second;
                cnt = 1;
            }
        }

        return winner;
        
    }
};