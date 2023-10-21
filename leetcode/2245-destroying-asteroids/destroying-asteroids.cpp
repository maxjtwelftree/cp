class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n = asteroids.size();
        sort(asteroids.begin(), asteroids.end());
        bool check = true;
        long long curr = mass;

        for (long long i = 0; i < n; i++) {
            if (curr >= asteroids[i]) {
                curr += asteroids[i];
            } else {
                check = false;
            }
        }

        return check;
    }
};