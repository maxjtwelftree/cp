struct Solution {
    int pivotInteger(int n) {
        // just continue calculating for 


        // iterate adding up to a number, pushing those numbers as a prefix sum into a vector 

        // 
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }

        int checker = 0;
        for (int i = 1; i <= n; ++i) {
            checker += i;
            if (checker == (sum - checker + i)) return i;
        }

        return -1;
    }
};