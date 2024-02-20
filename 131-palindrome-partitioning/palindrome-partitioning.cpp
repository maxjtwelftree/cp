class Solution {
public:
    bool isPalindrome(const string& s, int start, int end) {
        while (start < end) {
            if (s[start++] != s[end--]) return false;
        }
        return true;
    }

    void backtrack(const string& s, int start, vector<string>& path, vector<vector<string>>& result) {
        if (start == s.length()) { // If reached the end, add the current path to result
            result.push_back(path);
            return;
        }
        
        for (int end = start; end < s.length(); ++end) {
            if (isPalindrome(s, start, end)) {
                // If the substring s[start...end] is a palindrome, include it in the current path
                path.push_back(s.substr(start, end - start + 1));
                // Move to the next part of the string
                backtrack(s, end + 1, path, result);
                // Backtrack to explore other partitions
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> path; // Current partition path
        backtrack(s, 0, path, result);
        return result;
    }

};