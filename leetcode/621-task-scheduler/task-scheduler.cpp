class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<int, int> map;
        int cnt = 0;

        for (int i : tasks) {
            map[i]++;
            cnt = max(cnt, map[i]);
        }

        int ans = (cnt-1) * (n+1);

        for (auto i : map) {
            if (i.second == cnt) ans++;
        }
 

        return max((int)tasks.size(), ans);
    }
};