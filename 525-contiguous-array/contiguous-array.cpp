struct Solution {
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> indexMap; // Maps cumulative sum to its earliest index
        int maxLength = 0, count = 0;
        
        // Handle the case where the subarray starts from index 0
        indexMap[0] = -1;
        
        for (int i = 0; i < nums.size(); ++i) {
            count += nums[i] == 1 ? 1 : -1; // Increment for 1, decrement for 0
            
            // If this count has been seen before, it means the subarray between
            // the two indices has an equal number of 0's and 1's.
            if (indexMap.find(count) != indexMap.end()) {
                maxLength = max(maxLength, i - indexMap[count]);
            } else {
                // Store the first occurrence of this cumulative sum
                indexMap[count] = i;
            }
        }
        
        return maxLength;
    }
};
