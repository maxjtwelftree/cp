class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        int count = 0;
        for (int i = n/2; i >= 1; i--) {
            if (n % i == 0) {
                if(s.substr(0,n-i)==s.substr(i)) {
                    return true;
                }
            }
        }
        return false;
    }
};