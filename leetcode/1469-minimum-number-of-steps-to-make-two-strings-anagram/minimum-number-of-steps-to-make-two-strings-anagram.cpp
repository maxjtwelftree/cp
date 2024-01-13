struct Solution {
    [[nodiscard]] int minSteps(string s, string t) {
        unordered_map<char, int> map1{};
        unordered_map<char, int> map2{};
        int_least32_t tracking{0};

        for (const auto& x : s) map1[x]++;
        for (const auto& x : t) map2[x]++;

        for (auto [first, second] : map1) {
            if (map2[first] < second) tracking += second - map2[first];
        }

        // map1 = [a = 1, b = 2]
        // map2 = [a = 2, b = 1] 
        return tracking;
    }
};