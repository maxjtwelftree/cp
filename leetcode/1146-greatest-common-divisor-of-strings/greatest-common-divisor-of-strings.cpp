class Solution {
public:
    // uses gcd = greatest common divisor 
    // uses substr = substring
    // ? = ternary operator used to return different values based on (str1 + str2 == str2 + str1) is true or false, : the line after matches the ?

    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)?
        str1.substr(0, gcd(size(str1), size(str2))): "";
    }
};