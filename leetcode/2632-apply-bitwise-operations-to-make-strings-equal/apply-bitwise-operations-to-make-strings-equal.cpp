class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        bool thas = false;
        bool shas = false;

        for (char ch : s) {
            if (ch == '1') {
                shas = true;
                break;
            }
        }

        for (char ch : target) {
            if (ch == '1') {
                thas = true;
                break;
            }
        }
        if (shas == thas) {
            return true;
        }        
        return false;
        
    }
};