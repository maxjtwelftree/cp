class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int length = mountainArr.length();
        
        // finding the peak element 
        int l = 0;
        int r = length - 1;
        int peak = 0;

        while (l < r) {
            int m = (l+r)/2;
            int middle = mountainArr.get(m);
            int right = mountainArr.get(m + 1);
        
            if (middle < right) {
                l = m + 1;
            } else {
                r = m;
            }
        }
        peak = l;

        int nl = 0;
        int nr = peak;

        while (nl <= nr) {
            int m = (nl+nr)/2;
            int val = mountainArr.get(m);

            if (val < target) {
                nl = m + 1;
            } else if (val > target) {
                nr = m - 1;
            } else {
                return m;
            }
        }

        int ln = peak;
        int rn = length - 1;

        while (ln <= rn) {
            int m = (ln+rn)/2;
            int val = mountainArr.get(m);

            if (val > target) {
                ln = m + 1;
            } else if (val < target) {
                rn = m - 1;
            } else {
                return m;
            }
        }
        return -1;
    }
};