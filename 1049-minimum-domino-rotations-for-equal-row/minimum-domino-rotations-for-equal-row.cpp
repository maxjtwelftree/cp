#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

struct Solution {
    [[nodiscard]] int_least32_t minDominoRotations(vector<int_least32_t>& tops, vector<int_least32_t>& bottoms) const {
        unordered_map<int, int> count;
        
        // Count occurrences for each number in both tops and bottoms
        for (int i = 0; i < tops.size(); ++i) {
            count[tops[i]]++;
            if (tops[i] != bottoms[i]) count[bottoms[i]]++;
        }
        
        // Find a value that appears in all dominos, if any
        int target = -1;
        for (const auto& p : count) {
            if (p.second >= tops.size()) {
                target = p.first;
                break;
            }
        }
        
        // If no such value exists, it's impossible to satisfy the condition
        if (target == -1) return -1;
        
        // Count rotations needed to make all tops or bottoms the same as the target value
        int_least32_t rotationsTop = 0, rotationsBottom = 0;
        for (int i = 0; i < tops.size(); ++i) {
            if (tops[i] != target && bottoms[i] != target) return -1; // Can't make this domino match
            if (tops[i] != target) rotationsTop++; // Need rotation to make top match
            if (bottoms[i] != target) rotationsBottom++; // Need rotation to make bottom match
        }
        
        // Return the minimum of the two rotation counts
        return min(rotationsTop, rotationsBottom);
    }
};
