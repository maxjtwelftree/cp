class Solution {
public:
    bool detectCapitalUse(string word) {
        auto counter{0};

        for (auto x : word)
            if (isupper(x)) counter++;

        return counter == 0 || counter == 1 && isupper(word[0]) || counter == word.size(); 
        
    }
};