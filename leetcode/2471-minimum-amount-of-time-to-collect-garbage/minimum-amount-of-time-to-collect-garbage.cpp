class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int t1 = 0, t2 = 0, t3 = 0;
        int check1 = 0, check2 = 0, check3 = 0;
        int total1 = 0, total2 = 0, total3 = 0;
        
        for (int i = 0; i < garbage.size(); i++) {
            for (auto j : garbage[i]) {
                if (j == 'G') {
                    t1++;
                    check1 = i;
                }
                if (j == 'P') {
                    t2++;
                    check2 = i;
                }
                if (j == 'M') {
                    t3++;
                    check3 = i;
                }
            }
        }

        for (int i = 0; i < check1; i++) {
            total1 += travel[i];
        }
        total1 += t1;

        for (int i = 0; i < check2; i++) {
            total2 += travel[i];
        }
        total2 += t2;

        for (int i = 0; i < check3; i++) {
            total3 += travel[i];
        }
        total3 += t3;

        return total1 + total2 + total3;
    }
};