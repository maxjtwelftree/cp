// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int s = 0;
        long int e = n;
        long int r = 0;

        while (s <= e) {
            int m = (s + e)/2;
            if (isBadVersion(m) == 1) {
                r = m;
                e = m - 1;
            }
            else 
            s = m + 1;
        }
        return r;    
    }
};