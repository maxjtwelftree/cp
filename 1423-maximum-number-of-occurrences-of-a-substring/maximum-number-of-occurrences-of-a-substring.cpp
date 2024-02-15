#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string, int> freqMap; // Stores frequencies of substrings
        int maxFrequency = 0;

        for (int size = minSize; size <= maxSize; ++size) {
            unordered_map<char, int> charCount; // Counts occurrences of characters
            int uniqueChars = 0; // Number of unique characters in the current window
            for (int left = 0, right = 0; right < s.length(); ++right) {
                // If this is a new character in the current window, increment uniqueChars
                if (++charCount[s[right]] == 1) uniqueChars++;

                // If the window size exceeds 'size', shrink it from the left
                if (right - left + 1 > size) {
                    if (--charCount[s[left]] == 0) uniqueChars--; // If a character completely leaves the window
                    left++;
                }

                // If the window size matches 'size' and unique characters are within limit, update frequency
                if (right - left + 1 == size && uniqueChars <= maxLetters) {
                    string substring = s.substr(left, size);
                    maxFrequency = max(maxFrequency, ++freqMap[substring]);
                }
            }
        }

        return maxFrequency;
    }
};
