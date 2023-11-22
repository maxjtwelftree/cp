class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> a;
        for (int i : nums) a.push_back(i);
        for (int i : nums) a.push_back(i);
        return a;
    }
};