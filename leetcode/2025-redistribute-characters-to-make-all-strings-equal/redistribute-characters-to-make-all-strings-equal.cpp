class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> mapping{};
        const size_t length = words.size();

        for (const auto& word : words) 
            for (const char& c : word) mapping[c]++;

        for (const auto& x: mapping) 
            if (x.second % length != 0) return false;
        return true;
    }
};