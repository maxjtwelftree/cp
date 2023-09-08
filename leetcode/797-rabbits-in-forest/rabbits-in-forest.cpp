class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> map;
        for (int num : answers) {
            map[num]++;
        }

        int result = 0;

        for (const auto& pair : map) {
            result += (pair.second + pair.first) / (pair.first + 1) * (pair.first + 1);
        } 

        return result;
    }
};