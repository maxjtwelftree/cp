struct Solution {
    vector<string> final_string{};
    map<int, string> map{};
    void backtracking(string& digits, int start, string& temp) {
        if (start == digits.size()) final_string.push_back(temp);
        for(auto& x : map[digits[start]-'0']) {
            temp.push_back(x);
            backtracking(digits, start+1, temp);
            temp.pop_back();
        }
    }
    [[nodiscard]] vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) return final_string;
        map[2] = "abc";
        map[3] = "def";
        map[4] = "ghi";
        map[5] = "jkl";
        map[6] = "mno";
        map[7] = "pqrs";
        map[8] = "tuv";
        map[9] = "wxyz";
        string temp;
        backtracking(digits, 0, temp);
        return final_string;
    }
};