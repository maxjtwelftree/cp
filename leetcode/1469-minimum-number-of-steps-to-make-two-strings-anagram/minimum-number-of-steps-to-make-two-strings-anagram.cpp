struct Solution {
    int minSteps(const std::string& s, const std::string& t) {
        std::array<int32_t, 26> freqs{}; 

        for (const auto& ch : s) freqs[ch - 'a']++;
        for (const auto& ch : t) freqs[ch - 'a']--;

        int32_t tracking = std::accumulate(freqs.begin(), freqs.end(), 0, [] (int32_t acc, int32_t freq) {
            return acc + (freq > 0 ? freq : 0);
        });
        
        return tracking;
    }
};
