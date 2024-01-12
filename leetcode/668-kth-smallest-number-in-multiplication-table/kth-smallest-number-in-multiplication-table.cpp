struct Solution {
    [[nodiscard]] int findKthNumber(int m, int n, int k) {
        // binary search this matrix vec
        int left = 0, right = m * n;

        while (left < right) {
            int middle = (left + right) / 2;
            int count = 0;
            for (int i = 1; i <= m; ++i) {
                count += std::min(middle / i, n);
            }
            if (count < k) {
                left = middle + 1;
            } else {
                right = middle;
            }
        }
        return right;

    }
};