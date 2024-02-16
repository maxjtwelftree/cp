struct Solution {
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> map;

        for (const auto i : arr) 
            map[i]++;
        

        vector<pair<int, int>> my_current(map.begin(), map.end());

        sort(my_current.begin(), my_current.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second; 
        });
        

        int out = my_current.size();
        for (auto& x : my_current) {
            if (k >= x.second) {
                k -= x.second;
                out--;
            } else {
                break;
            }
        }
        
        return out;
    }
};