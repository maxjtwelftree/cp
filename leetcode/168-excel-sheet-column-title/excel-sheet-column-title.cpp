class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";

        while (columnNumber) {
            columnNumber--;
            char current = 'A' + columnNumber % 26;
            result += current;
            columnNumber /= 26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};