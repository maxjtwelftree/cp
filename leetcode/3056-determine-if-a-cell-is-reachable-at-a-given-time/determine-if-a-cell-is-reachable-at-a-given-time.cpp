class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        auto width = abs(sx - fx);
        auto height = abs(sy - fy);

        if (width == 0 && height == 0 && t == 1) {
            return false;
        }

        return t >= max(width, height);
    }
};