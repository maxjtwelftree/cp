class Solution {
public:
    bool isPathCrossing(string path) {
        auto x{0};
        auto y{0};
        set<pair<int32_t, int32_t>> mapping{{x, y}};

        for (const auto direction : path) {
            switch(direction) {
                case 'N' : y++; break;
                case 'E' : x++; break;
                case 'S' : y--; break;
                case 'W' : x--; break;
            }
            if (!mapping.emplace(x, y).second) return true;
        }

        return false;
    }
};