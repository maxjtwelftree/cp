struct Solution {
    [[nodiscard]] vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> output_vector_of_spells;
        ranges::sort(potions);

        for (const auto& i : spells) {
            int_least64_t tracking = (success + i - 1) / i;
            auto it = lower_bound(potions.begin(), potions.end(), tracking);
            output_vector_of_spells.push_back(potions.end() - it);
        }

        return output_vector_of_spells;
    }
};