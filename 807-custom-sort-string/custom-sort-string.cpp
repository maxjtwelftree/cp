class Solution {
public:
    string customSortString(string order, string s) {
        sort(s.begin(), s.end(), [order] (auto char_1, auto char_2) {
            return order.find(char_1) < order.find(char_2);
        });
        
        return s;
    }
};