class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt = 0;

        for (auto i = 0; i < flowerbed.size(); ++i) {
            if (flowerbed[i] == 0) {
                bool check1 = (i == 0) || (flowerbed[i-1] == 0);
                bool check2 = (i == flowerbed.size()-1) || (flowerbed[i+1] == 0);

                if (check1 && check2) {
                    flowerbed[i] = 1;
                    cnt++;
                }
            }
        }

        return cnt >= n;
    }
};