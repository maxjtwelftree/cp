class Solution {
public:
    int maxDepth(string s) {
        int counter = 0, final_counter = 0;
        for (const auto& x : s) {
            if (x == '(') counter++;
            else if (x == ')') counter--;
            final_counter = max(final_counter, counter);
        }
        return final_counter;
    }
};