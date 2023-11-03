class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        auto out = vector<string>();
        auto i = 0;

        for (auto val : target) {
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