class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int x = (numBottles * numExchange) - 1;
        int y = numExchange - 1;
        int z = (x/y);
        return z;
    }
};