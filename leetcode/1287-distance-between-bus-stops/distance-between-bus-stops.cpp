struct Solution {
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if (start > destination) swap(start, destination);
        int_least64_t total = accumulate(distance.begin(), distance.end(), 0);
        int_least64_t final_dest = accumulate(distance.begin() + start, distance.begin() + destination, 0);
        return min(final_dest, total - final_dest);
    }
};