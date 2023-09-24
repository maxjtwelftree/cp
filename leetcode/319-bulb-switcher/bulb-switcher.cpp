class Solution {
public:
    int bulbSwitch(int n) {

        return sqrt(n);
        // round 1/4 == all off
        // round 2/4 == all on
        // round 3/4 == one on, one off, one on....
        // round 4/4 == one on, one off, one off...

        // therefore, n = rounds and bulbs,

        // so if it is, 3 there is 9 bulbs and 3 are off in total

        // if it is 4, there is 16 bulbs and there are 4 off

        // etc.... 

    }
};