class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> out;
        int i = 0;

        for (int val : target) {
            while (i < val - 1) {
                out.push_back("Push");
                out.push_back("Pop");
                i++;
            } 
            out.push_back("Push");
            i++;
        }

        return out;
    }
};