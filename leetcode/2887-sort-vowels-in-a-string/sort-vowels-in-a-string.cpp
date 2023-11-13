class Solution {
public:
    bool check(char c) {
        return c == 'a' || c == 'e' || c == 'o' || c == 'u' || c == 'i' || c == 'A' || c == 'E' || c == 'O' || c == 'U' || c == 'I';
    }
    string sortVowels(string s) {
        string temp;
        for (char c : s) {
            if (check(c)) {
                temp += c;
            }
        }

        sort(temp.begin(), temp.end());
        string out;
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (check(s[i])) {
                out += temp[j];
                j++;
            } else {
                out += s[i];
            }
        }

        return out;
    }
};