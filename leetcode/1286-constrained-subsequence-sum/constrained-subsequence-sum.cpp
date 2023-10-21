class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        // use pq, such that a pair is used, and then, within the pairs, have
        // nums first and index second, set ans to = nums[0]
        // then iterate with i and check if our index is greater than k
        // if it is then we pop from the queue
        // then we can check the max using an integer setting it to the max 
        // of, the first element in the pq and nums i and the index 
        // then init our ans to max val we make 
        // then push to the pq again with our max int and index, continue iterating till nums size is fufilled 
        priority_queue<pair<int, int>> pq;
        pq.push({nums[0], 0});
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            while (i - pq.top().second > k) {
                pq.pop();
            }
            int our_goal = max(0, pq.top().first) + nums[i];
            ans = max(ans, our_goal);
            pq.push({our_goal, i});
        } 

        return ans;
        
    }
};