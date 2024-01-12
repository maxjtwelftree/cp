class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int firsthalf = s.size() / 2;
        int secondhalf = firsthalf;
        int counter1 = 0, counter2 = 0;

        for (size_t i = 0; i < firsthalf; ++i) {
            if (vowels.count(s[i]) > 0) {
                counter1++;
            }
        }

        for (size_t i = firsthalf; i < s.size(); ++i) {
            if (vowels.count(s[i]) > 0) {
                counter2++;
            }
        }

        return counter1 == counter2;
    }
};