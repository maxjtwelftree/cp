class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map;
        for (auto num : arr) {
            map[num]++;
        }

        unordered_set<int> freq;
        for(auto it: map) {
            freq.insert(it.second);
        } 
        if (map.size()==freq.size()) {
            return true;
        }
        return false;
    }
};