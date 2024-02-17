struct Solution {
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int32_t, vector<int32_t>, greater<int32_t>> pq;
        for (size_t i = 1; i < heights.size(); ++i) {
            if (heights[i] - heights[i-1] > 0) {pq.push(heights[i] - heights[i-1]);
                if (pq.size() > ladders) {bricks -= pq.top(); pq.pop();}}
            if (bricks < 0) {return i - 1;}
        }  
        return heights.size() - 1;
    }
};