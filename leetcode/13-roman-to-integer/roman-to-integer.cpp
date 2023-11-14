class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000; 

        // III
        // 1+1+1 = 3;
        // iterate over and just check of it is or not the same character
        // if it is not do the first check

        // IVI
        // 1<5 = 4 (the first check is just roman numeral rules)
        // else it is gonna plus it

        int ans = 0;

        for(int i = 0; i < s.length(); i++) {
            if (m[s[i]] < m[s[i+1]]) {
                ans -= m[s[i]];
            } else {
                ans += m[s[i]];
            }
        }

        return ans;
    }
};