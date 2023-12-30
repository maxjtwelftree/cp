class Solution {
public:
    int minSwaps(string s) {
        stack<char> stacking;

        for (auto c : s) 
            if (c == '[') stacking.push(c);
            else if (!stacking.empty()) stacking.pop();
        
        return (stacking.size() + 1) / 2;
        
    }
};