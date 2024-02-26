struct Solution {
    [[nodiscard]] vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> string_matching{};
        
        for (const auto& x : strs) {
            string word = x;
            sort(word.begin(), word.end());
            string_matching[word].push_back(x);
        }

        vector<vector<string>> output_vector{};
        for (auto it : string_matching) 
            output_vector.push_back(it.second);

        return output_vector;
    }
};