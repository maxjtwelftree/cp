class Solution {
public:
    int findContentChildren(std::vector<int>& greedy, std::vector<int>& sizing) {
        std::ranges::sort(greedy);
        std::ranges::sort(sizing);
        std::size_t i = 0;
        int count = 0;  // Separate counter for matches
        
        for (std::size_t j = 0; i < greedy.size() && j < sizing.size(); ++j) {
            if (greedy[i] <= sizing[j]) {
                ++i;      // Move to the next child
                ++count;  // Increment the count of successful matches
            }
        }

        return count;  // Return the count of matches
    }
};
