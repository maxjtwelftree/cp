class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<int32_t, int32_t> map;
        auto cnt = 0;

        for (const auto& i : tasks) {
            map[i]++;
            cnt = max(cnt, map[i]);
        }

        auto ans = (cnt-1) * (n+1);

        for (const auto& i : map) 
            if (i.second == cnt) ans++;
        
 
        return max(static_cast<int>(tasks.size()), ans);
    }
};