struct Solution {
    [[nodiscard]] int rangeBitwiseAnd(int left, int right) const {
        while (left < right) right &= (right - 1); 
        return right;
    }
};