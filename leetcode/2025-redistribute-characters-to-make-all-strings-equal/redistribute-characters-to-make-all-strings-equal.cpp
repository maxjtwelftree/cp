class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> mapping{};
        size_t length = words.size();

        for (const auto& word : words) 
            for (char c : word) mapping[c]++;

        for (auto x: mapping)
            if (x.second % length != 0) return false;
        return true;
        
    }
};