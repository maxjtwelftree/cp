class Solution {
public:
    bool isAnagram(string s, string t) {
        array<int, 26> tracking{};
        for (const auto& c : s) tracking[c - 'a']++;
        for (const auto& c : t) tracking[c - 'a']--;
        for (const auto& c : tracking) if (c != 0) return false;
        return true;
    }
};