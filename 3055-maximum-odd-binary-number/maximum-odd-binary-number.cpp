class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string t = "";
        int one_count = 0;

        for (int i = 0; i < s.size(); ++i) if (s[i] == '1') one_count++;
        for (int i = 0; i < one_count - 1; ++i) t += "1";
        for (int i = 0; i < s.size() - one_count; ++i) t += "0";
        
        t += "1";
        return t;
    }
};