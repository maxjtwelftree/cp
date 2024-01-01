class Solution {
public:
    int findContentChildren(std::vector<int>& greedy, std::vector<int>& sizing) {
        std::ranges::sort(greedy);
        std::ranges::sort(sizing);
        std::size_t count = 0; 
        
        for (std::size_t j = 0; count < greedy.size() && j < sizing.size(); ++j) 
            if (greedy[count] <= sizing[j]) 
                ++count;  

        return count;  
    }
};
