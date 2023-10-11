class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        // vectors to store our start and end
        // blooming flowers = start - end
        // then we just find when persons are at blooming flowers and push back 
        // those number of flowers persons are at in a vector
        vector<int> start;
        vector<int> end;

        for (auto t : flowers) {
            start.push_back(t[0]);
            end.push_back(t[1]);
        }

        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        
        vector<int> out;
        for (int t : people) {
            int yep = upper_bound(start.begin(), start.end(), t) - start.begin();
            int no = lower_bound(end.begin(), end.end(), t) - end.begin();
            out.push_back(yep - no);
        }

        return out;
    }
};