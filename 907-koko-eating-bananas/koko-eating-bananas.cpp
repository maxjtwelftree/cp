struct Solution {
    [[nodiscard]] int minEatingSpeed(vector<int>& piles, int h) {        
        auto can_we = [&](int speed) {
            long long hoursNeeded = 0;
            for (int pile : piles) {
                hoursNeeded += (pile + speed - 1) / speed; // Ceiling division to account for partial hours
            }
            return hoursNeeded <= h;
        };

        int32_t left = 1, right = *max_element(piles.begin(), piles.end()); 
        while (left < right) {
            int middle = (left + right) / 2;
            if (can_we(middle)) {
                right = middle;
            } else {
                left = middle + 1;
            }
        }

        return left;
    }
};