struct Solution {
    int minSteps(const std::string& s, const std::string& t) {
        std::array<int_least32_t, 26> freqs{}; 

        for (const auto& ch : s) freqs[ch - 'a']++;
        for (const auto& ch : t) freqs[ch - 'a']--;

        int_least32_t tracking{0};
        for (int_least32_t difference : freqs) 
            if (difference > 0) tracking += difference;
        
        return tracking;
    }
};
