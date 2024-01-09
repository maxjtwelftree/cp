class Solution {
public:
    bool isAnagram(string s, string t) {
        array<int, 26> tracking{};

        for (const auto& c : s) tracking[c - 'a']++;
        for (const auto& c : t) tracking[c - 'a']--;

        return !any_of(tracking.begin(), tracking.end(), [](auto count){return count != 0;});
    }
};