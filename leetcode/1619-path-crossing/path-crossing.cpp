class Solution {
public:
    bool isPathCrossing(string path) {
        auto x = 0;
        auto y = 0;
        set<pair<int, int>> mapping;
        mapping.insert(make_pair(x, y));

        for (const auto& c : path) {
            switch(c) {
                case 'N' : y++; break;
                case 'E' : x++; break;
                case 'S' : y--; break;
                case 'W' : x--; break;
            }
            if (mapping.count(make_pair(x, y))) return true;
            mapping.insert(make_pair(x,y));
        }

        return false;
    }
};